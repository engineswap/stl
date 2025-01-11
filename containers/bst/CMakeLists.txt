# BST library, can be re-used for tests
add_library(bst_lib bst.hpp bst.cpp)

# Build bst with main
add_executable(bst_main ../../main.cpp)

# Link bst lib with bst main
target_link_libraries(bst_main bst_lib)
