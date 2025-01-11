# library, can be re-used for tests
add_library(string_lib string.cpp string.hpp)

# Build with main
add_executable(string_main ../../main.cpp)

# Link lib with main
target_link_libraries(string_main string_lib)
