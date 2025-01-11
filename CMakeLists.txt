# Cmake version
cmake_minimum_required(VERSION 3.10)
# C++ Version
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Project Name
project(cpp_STL)

# Add subdirectories
add_subdirectory(containers/bst)
add_subdirectory(containers/hashmap)
add_subdirectory(containers/linked_list)
add_subdirectory(containers/string)
add_subdirectory(containers/vector)

# Tests
# add_subdirectory(tests)
