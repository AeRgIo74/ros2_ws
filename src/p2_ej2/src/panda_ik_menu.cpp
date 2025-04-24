#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h> // Nuevo header para la escena
#include <geometry_msgs/msg/pose.hpp>
#include <shape_msgs/msg/solid_primitive.hpp> // Nuevo header para formas primitivas
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>
#include <vector>

using moveit::planning_interface::MoveGroupInterface;
using moveit::planning_interface::PlanningSceneInterface;

geometry_msgs::msg::Pose crear_pose(double x, double y, double z, double w = 1.0, double rx = 0.0, double ry = 0.0, double rz = 0.0)
{
  geometry_msgs::msg::Pose pose;
  pose.position.x = x;
  pose.position.y = y;
  pose.position.z = z;
  pose.orientation.w = w;
  pose.orientation.x = rx;
  pose.orientation.y = ry;
  pose.orientation.z = rz;
  return pose;
}

void mover_a_pose(MoveGroupInterface & move_group, const geometry_msgs::msg::Pose & pose, rclcpp::Logger logger)
{
  move_group.setPoseTarget(pose);
  MoveGroupInterface::Plan plan;
  bool success = static_cast<bool>(move_group.plan(plan));
  if (success)
  {
    move_group.execute(plan);
    RCLCPP_INFO(logger, "✅ Movimiento ejecutado con éxito.");
  }
  else
  {
    RCLCPP_ERROR(logger, "❌ Falló la planificación del movimiento.");
  }
}

bool es_movimiento_valido(MoveGroupInterface &move_group, const geometry_msgs::msg::Pose &pose)
{
  move_group.setPoseTarget(pose);
  MoveGroupInterface::Plan plan;
  bool success = static_cast<bool>(move_group.plan(plan));
  return success;
}

// Diccionario con coordenadas funcionales
std::map<int, geometry_msgs::msg::Pose> coordenadas_funcionales()
{
  std::map<int, geometry_msgs::msg::Pose> coordenadas;

  // Coordenadas predefinidas funcionales
  coordenadas[1] = crear_pose(-0.58, 0.2, 0.5, 1.0);   // Posición 1
  coordenadas[2] = crear_pose(0.9, 0.4, 0.1, 0.7);      // Posición 2
  coordenadas[3] = crear_pose(1.5, 1.1, 0.9, 0.0);      // Posición 3
  coordenadas[4] = crear_pose(0.3, -0.5, 0.8, 0.6);     // Posición 4
  coordenadas[5] = crear_pose(-1.0, 0.8, 0.6, 0.8);     // Posición 5

  return coordenadas;
}

// Función para obtener una coordenada aleatoria del diccionario
geometry_msgs::msg::Pose obtener_coordenada_aleatoria()
{
  std::map<int, geometry_msgs::msg::Pose> coordenadas = coordenadas_funcionales();
  int random_index = (std::rand() % coordenadas.size()) + 1;  // Selección aleatoria de índice
  return coordenadas[random_index];  // Devolver la coordenada seleccionada
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("panda_ik_menu");
  rclcpp::Logger logger = rclcpp::get_logger("panda_ik_menu");

  MoveGroupInterface move_group(node, "panda_arm");
  PlanningSceneInterface planning_scene_interface; // Interfaz para la escena de planificación
  move_group.setPlanningTime(5.0);

  // Añadir dos obstáculos (bloques cúbicos) a la escena
  moveit_msgs::msg::CollisionObject obstacle1;
  obstacle1.header.frame_id = move_group.getPlanningFrame();
  obstacle1.id = "obstacle_1";
  shape_msgs::msg::SolidPrimitive primitive1;
  primitive1.type = primitive1.BOX;
  primitive1.dimensions = {0.2, 0.2, 0.2};
  geometry_msgs::msg::Pose pose_obstacle1;
  pose_obstacle1.orientation.w = 1.0;
  pose_obstacle1.position.x = 0.3;
  pose_obstacle1.position.y = 0.3;
  pose_obstacle1.position.z = 0.5;
  obstacle1.primitives.push_back(primitive1);
  obstacle1.primitive_poses.push_back(pose_obstacle1);
  obstacle1.operation = obstacle1.ADD;

  moveit_msgs::msg::CollisionObject obstacle2;
  obstacle2.header.frame_id = move_group.getPlanningFrame();
  obstacle2.id = "obstacle_2";
  shape_msgs::msg::SolidPrimitive primitive2;
  primitive2.type = primitive2.BOX;
  primitive2.dimensions = {0.3, 0.3, 0.3};
  geometry_msgs::msg::Pose pose_obstacle2;
  pose_obstacle2.orientation.w = 1.0;
  pose_obstacle2.position.x = -0.5;
  pose_obstacle2.position.y = -0.3;
  pose_obstacle2.position.z = 0.5;
  obstacle2.primitives.push_back(primitive2);
  obstacle2.primitive_poses.push_back(pose_obstacle2);
  obstacle2.operation = obstacle2.ADD;

  std::vector<moveit_msgs::msg::CollisionObject> collision_objects;
  collision_objects.push_back(obstacle1);
  collision_objects.push_back(obstacle2);
  planning_scene_interface.addCollisionObjects(collision_objects);
  RCLCPP_INFO(logger, "Se han añadido dos obstáculos a la escena.");

  // Inicializar generador de números aleatorios
  std::srand(std::time(0));

  while (rclcpp::ok())
  {
    std::cout << "\n========= MENÚ CINEMÁTICA INVERSA =========" << std::endl;
    std::cout << "1 - Mover a posición 1 (-0.58, 0.2, 0.5, w=1.0)" << std::endl;
    std::cout << "2 - Mover a posición 2 (0.9, 0.4, 0.1, w=0.7)" << std::endl;
    std::cout << "3 - Mover a posición 3 (1.5, 1.1, 0.9, w=0.0)" << std::endl;
    std::cout << "4 - Ingresar coordenadas personalizadas" << std::endl;
    std::cout << "5 - Salir" << std::endl;
    std::cout << "6 - Generar coordenada aleatoria y mover robot" << std::endl; // Opción actualizada
    std::cout << "Seleccione una opción: ";

    int opcion;
    std::cin >> opcion;

    if (opcion == 5) break;

    geometry_msgs::msg::Pose pose;

    switch (opcion)
    {
      case 1:
        pose = crear_pose(-0.58, 0.2, 0.5, 1.0);
        break;
      case 2:
        pose = crear_pose(0.9, 0.4, 0.1, 0.7);
        break;
      case 3:
        pose = crear_pose(1.5, 1.1, 0.9, 0.0);
        break;
      case 4:
        double x, y, z, w;
        std::cout << "Ingrese x: "; std::cin >> x;
        std::cout << "Ingrese y: "; std::cin >> y;
        std::cout << "Ingrese z: "; std::cin >> z;
        std::cout << "Ingrese orientación w: "; std::cin >> w;
        pose = crear_pose(x, y, z, w);
        break;
      case 6:
        // Seleccionar coordenada aleatoria del diccionario
        std::cout << "Generando coordenada aleatoria..." << std::endl;

        pose = obtener_coordenada_aleatoria();

        // Verificar si el movimiento es válido
        if (es_movimiento_valido(move_group, pose))
        {
          std::cout << "Las coordenadas generadas son válidas: (" << pose.position.x << ", " << pose.position.y << ", " << pose.position.z << ", " << pose.orientation.w << "). Procediendo con el movimiento." << std::endl;
          mover_a_pose(move_group, pose, logger);
        }
        else
        {
          std::cout << "Las coordenadas generadas no son válidas. Intentando nuevamente..." << std::endl;
        }

        continue; // Volver al menú sin ejecutar el resto de opciones
      default:
        std::cout << "Opción inválida." << std::endl;
        continue;
    }

    mover_a_pose(move_group, pose, logger);
  }

  rclcpp::shutdown();
  return 0;
}