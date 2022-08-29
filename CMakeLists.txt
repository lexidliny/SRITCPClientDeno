cmake_minimum_required(VERSION 3.7)

project (sriComm)
find_package(Threads)
find_package (Eigen3 )


set (CMAKE_CXX_STANDARD 11)
file(GLOB SRC_FILE ./src/*.*)
message(STATUS ${SRC_FILE})


add_executable(sriComm ${SRC_FILE})
target_link_libraries (${PROJECT_NAME} pthread Eigen3::Eigen) 








