# CMakeList.txt : CMake project for Block Buster

# Set project name
project (BLOCK_BUSTER)

# Set cmake minimum required
cmake_minimum_required (VERSION 3.8)

find_package (SFML 2.5 COMPONENTS window graphics REQUIRED)


add_executable (${PROJECT_NAME} "main.cpp")

# Link libraries
target_link_libraries(${PROJECT_NAME} sfml-window sfml-graphics)

# TODO: Add tests and install targets if needed.
