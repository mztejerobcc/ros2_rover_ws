#include "rclcpp/rclcpp.hpp"
#include "data_processor/data_pub_lib.hpp"
#include "data_processor/rvr_data_sub_lib.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  auto dp = std::make_shared<DataProcessor>();

  auto pub_node = std::make_shared<DataProcessorPublisher>(dp);
  auto sub_node = std::make_shared<RvrDataSubscriber>(dp);

  rclcpp::executors::MultiThreadedExecutor executor;

  executor.add_node(pub_node);
  executor.add_node(sub_node);

  executor.spin();

  rclcpp::shutdown();
  return 0;
}