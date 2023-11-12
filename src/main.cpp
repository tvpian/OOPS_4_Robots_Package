#include "legged_robot.h"
#include "mobile_robot.h"
#include "wheeled_robot.h"
#include <memory>
#include <vector>

int main() {
  auto wheeled_robot = std::make_unique<RWA2::WheeledRobot>(
      0.0, 0.0, 0.0, 0.0, "Turtlebot", "ss", 5, 10);
  wheeled_robot->move(10, 90.0);
  auto legged_robot = std::make_unique<RWA2::LeggedRobot>(
      0.0, 0.0, 0.0, 0.0, "Atlas", "ss", 300, 0.5);
  legged_robot->move(5.0, 90.0);
  return 0;
}
