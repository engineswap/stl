# Cmake version
cmake_minimum_required(VERSION 3.10)

# C++ Version
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Project Name
project(cpp_STL)

# Collect all hpp and cpp files
file(GLOB_RECURSE SOURCES "containers/**/*.cpp")
file(GLOB_RECURSE HEADERS "containers/**/*.hpp")
file(GLOB TEST_FILES "tests/*.cpp")

# Main program
add_executable(cpp_STL main.cpp ${SOURCES} ${HEADERS})

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

# Create an executable for each test file
foreach(test_file ${TEST_FILES})
    # Extract the name of the test file (e.g., "test_vector.cpp" -> "test_vector")
    get_filename_component(test_name ${test_file} NAME_WE)

    # Create a test executable
    add_executable(${test_name} ${test_file} ${SOURCES} ${HEADERS})

    target_link_libraries(${test_name} GTest::gtest_main)

    gtest_discover_tests(${test_name})
endforeach()
