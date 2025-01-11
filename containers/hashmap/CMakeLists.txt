# library, can be re-used for tests
add_library(hashmap_lib hashmap.cpp hashmap.hpp)

# Build with main
add_executable(hashmap_main ../../main.cpp)

# Link bst lib with bst main
target_link_libraries(hashmap_main hashmap_lib)
