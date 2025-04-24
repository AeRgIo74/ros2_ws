#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <geometry_msgs/msg/pose.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>

using moveit::planning_interface::MoveGroupInterface;

geometry_msgs::msg::Pose crear_pose(double x, double y, double z, double w = 1.0)
{
  geometry_msgs::msg::Pose pose;
  pose.position.x = x;
  pose.position.y = y;
  pose.position.z = z;
  pose.orientation.w = w;
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
  move_group.setPlanningTime(5.0);

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
