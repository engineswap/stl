# Build test executable, link with libs

add_executable(test_bst ./test_bst.cpp)
target_link_libraries(test_bst bst_lib)

add_executable(test_linked_list ./test_linked_list.cpp)
target_link_libraries(test_linked_list linked_list_lib)

add_executable(test_hashmap ./test_hashmap.cpp)
target_link_libraries(test_hashmap hashmap_lib)

add_executable(test_string ./test_string.cpp)
target_link_libraries(test_string string_lib)

add_executable(test_vector ./test_vector.cpp)
target_link_libraries(test_vector vector_lib)

