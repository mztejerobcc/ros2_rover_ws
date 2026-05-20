#include "data_processor/rvr_data_sub_lib.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<RvrDataSubscriber>());
  rclcpp::shutdown();
  return 0;
}