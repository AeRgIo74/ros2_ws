#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <moveit/move_group_interface/move_group_interface.h>

int main(int argc, char * argv[])
{
  // Inicializa ROS 2
  rclcpp::init(argc, argv);

  // Crea el nodo
  auto const node = std::make_shared<rclcpp::Node>(
    "hello_moveit",
    rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true)
  );

  // Logger
  auto const logger = rclcpp::get_logger("hello_moveit");

  // Crear interfaz de MoveGroup (asegúrate de que el grupo 'manipulator' exista en el SRDF)
  using moveit::planning_interface::MoveGroupInterface;
  MoveGroupInterface move_group_interface(node, "panda_arm");

  // Definir la pose objetivo
  auto const target_pose = []{
    geometry_msgs::msg::Pose msg;
    msg.orientation.w = 1.0;
    msg.position.x = 0.28;
    msg.position.y = -0.2;
    msg.position.z = 0.5;
    return msg;
  }();
  move_group_interface.setPoseTarget(target_pose);

  // Planificar movimiento a la pose objetivo
  auto const [success, plan] = [&move_group_interface]{
    MoveGroupInterface::Plan msg;
    auto const ok = static_cast<bool>(move_group_interface.plan(msg));
    return std::make_pair(ok, msg);
  }();

  // Ejecutar el plan si fue exitoso
  if(success) {
    move_group_interface.execute(plan);
  } else {
    RCLCPP_ERROR(logger, "❌ ¡Fallo al planificar!");
  }

  // Apagar ROS 2
  rclcpp::shutdown();
  return 0;
}