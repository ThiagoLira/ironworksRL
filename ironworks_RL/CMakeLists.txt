cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(ironworks_RL)

find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

add_executable(ironworks_RL main.cpp)
target_link_libraries(ironworks_RL "${TORCH_LIBRARIES}")
set_property(TARGET ironworks_RL PROPERTY CXX_STANDARD 14)