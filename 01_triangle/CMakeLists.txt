cmake_minimum_required(VERSION 3.20)
project(01_triangle)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(01_triangle main.cpp)

target_link_libraries(01_triangle PRIVATE
    Vulkan::Vulkan
    glfw
)
