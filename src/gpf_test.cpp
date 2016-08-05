#include "lidar_eskf/gpf.h"

int main(int argc, char **argv) {
    // initialize ros
    ros::init(argc, argv, "gpf_test");
    ros::NodeHandle n("~");

    boost::shared_ptr<DistMap> map_ptr = boost::shared_ptr<DistMap>(new DistMap(n));
    GPF gpf(n, map_ptr);

    ros::spin();
    return 0;
}