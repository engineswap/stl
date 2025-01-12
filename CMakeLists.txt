# Cmake version
cmake_minimum_required(VERSION 3.10)

# C++ Version
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Project Name
project(cpp_STL)

# Collect all hpp and cpp files
file(GLOB_RECURSE SOURCES "containers/**/*.cpp")
file(GLOB_RECURSE HEADERS "containers/**/*.hpp")
file(GLOB TEST_FILES "tests/*.cpp")

# Main program
add_executable(cpp_STL main.cpp ${SOURCES} ${HEADERS})

# Setup google test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
link_directories(${GTEST_INCLUDE_DIRS})

# Create an executable for each test file
foreach(test_file ${TEST_FILES})
    # Extract the name of the test file (e.g., "test_vector.cpp" -> "test_vector")
    get_filename_component(test_name ${test_file} NAME_WE)

    # Create a test executable
    add_executable(${test_name} ${test_file} ${SOURCES} ${HEADERS})

    # Optionally link libraries for testing
    target_link_libraries(${test_name} ${GTEST_LIBRARIES} GTest::gtest_main pthread)
endforeach()
