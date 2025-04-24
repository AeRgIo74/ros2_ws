import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Point

class InverseKinematics(Node):

    def __init__(self):
        super().__init__('inverse_kinematics')
        self.joint_pub = self.create_publisher(JointState, 'joint_states', 10)
        self.target_sub = self.create_subscription(Point, 'target_position',
                                                   self.target_callback, 10)

        # Initial joint angles
        self.q = np.array([0.0, 0.0, 0.0, 0.0])  # [q0, q1, q2, q3]

        # Robot link lengths
        self.l1 = 0.5
        self.l2 = 0.3
        self.l3 = 0.3
        self.l4 = 0.3

        self.timer = self.create_timer(0.1, self.update_joints)
        self.target_pos = np.array([0.2, 0.3, 0.5])  # Default target

        # Parameters for IK
        self.step_size = 0.05
        self.max_iterations = 100
        self.tolerance = 0.01
        self.damping_factor = 0.1  # For damped least squares method

    def forward_kinematics(self, q):
        q0, q1, q2, q3 = q

        A1 = np.array([[np.cos(q0), -np.sin(q0)*np.cos(np.pi/2), np.sin(q0)*np.sin(np.pi/2), 0*np.cos(q0)],
                       [np.sin(q0), np.cos(q0)*np.cos(np.pi/2), -np.cos(q0)*np.sin(np.pi/2), 0*np.sin(q0)],
                       [0, np.sin(np.pi/2), np.cos(np.pi/2), self.l1],
                       [0, 0, 0, 1]])

        A2 = np.array([[np.cos(q1), -np.sin(q1)*np.cos(0), np.sin(q1)*np.sin(0), self.l2*np.cos(q1)],
                       [np.sin(q1), np.cos(q1)*np.cos(0), -np.cos(q1)*np.sin(0), self.l2*np.sin(q1)],
                       [0, np.sin(0), np.cos(0), 0],
                       [0, 0, 0, 1]])

        A3 = np.array([[np.cos(q2), -np.sin(q2)*np.cos(0), np.sin(q2)*np.sin(0), self.l3*np.cos(q2)],
                       [np.sin(q2), np.cos(q2)*np.cos(0), -np.cos(q2)*np.sin(0), self.l3*np.sin(q2)],
                       [0, np.sin(0), np.cos(0), 0],
                       [0, 0, 0, 1]])

        A4 = np.array([[np.cos(q3), -np.sin(q3)*np.cos(0), np.sin(q3)*np.sin(0), self.l4*np.cos(q3)],
                       [np.sin(q3), np.cos(q3)*np.cos(0), -np.cos(q3)*np.sin(0), self.l4*np.sin(q3)],
                       [0, np.sin(0), np.cos(0), 0],
                       [0, 0, 0, 1]])

        T = A1 @ A2 @ A3 @ A4
        pos = T[:3, 3]
        return pos

    def jacobian(self, q):
        # Placeholder: The actual symbolic derivation of this Jacobian can be done using sympy
        # or obtained from a robotics library like KDL or modern tools
        # For now, we use a finite difference approximation
        J = np.zeros((3, 4))
        f0 = self.forward_kinematics(q)
        delta = 1e-6

        for i in range(4):
            dq = np.zeros(4)
            dq[i] = delta
            f1 = self.forward_kinematics(q + dq)
            J[:, i] = (f1 - f0) / delta

        return J

    def target_callback(self, msg):
        self.target_pos = np.array([msg.x, msg.y, msg.z])
        self.get_logger().info(f"New target received: [{msg.x}, {msg.y}, {msg.z}]")

    def update_joints(self):
        current_pos = self.forward_kinematics(self.q)
        error = self.target_pos - current_pos
        error_norm = np.linalg.norm(error)

        self.get_logger().info(f"Current position: {current_pos}")
        self.get_logger().info(f"Target position: {self.target_pos}")
        self.get_logger().info(f"Error: {error_norm}")

        if error_norm > self.tolerance:
            J = self.jacobian(self.q)
            JtJ = J.T @ J
            damping = self.damping_factor * np.eye(JtJ.shape[0])
            J_dls = np.linalg.solve(JtJ + damping, J.T) @ error
            self.q += J_dls * self.step_size

        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = ['joint1', 'joint2', 'joint3', 'joint4']
        msg.position = self.q.tolist()
        self.joint_pub.publish(msg)


def main():
    rclpy.init()
    node = InverseKinematics()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '_main_':
    main()