# library, can be re-used for tests
add_library(vector_lib vector.cpp vector.hpp)

# Build with main
add_executable(vector_main ../../main.cpp)

# Link lib with main
target_link_libraries(vector_main vector_lib)
