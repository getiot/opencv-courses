cmake_minimum_required(VERSION 3.15)
project(hello_opencv)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} 
               hello.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})