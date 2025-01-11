# library, can be re-used for tests
add_library(linked_list_lib linked_list.cpp linked_list.hpp)

# Build with main
add_executable(linked_list_main ../../main.cpp)

# Link lib with main
target_link_libraries(linked_list_main linked_list_lib)
