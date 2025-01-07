CC = g++
CFLAGS = -std=c++17

# Default target
all: vector hashmap string linked_list

# Vector build
vector: main.cpp containers/vector/vector.cpp
	$(CC) $(CFLAGS) main.cpp containers/vector/vector.cpp -o vector.out

vector_test: tests/test_vector.cpp containers/vector/vector.cpp
	$(CC) $(CFLAGS) tests/test_vector.cpp containers/vector/vector.cpp -o vector_test.out

# Hashmap build
hashmap: main.cpp containers/hashmap/hashmap.cpp
	$(CC) $(CFLAGS) main.cpp containers/hashmap/hashmap.cpp -o hashmap.out

hashmap_test: tests/test_hashmap.cpp containers/hashmap/hashmap.cpp
	$(CC) $(CFLAGS) tests/test_hashmap.cpp containers/hashmap/hashmap.cpp -o hashmap_test.out

# String build
string: main.cpp containers/string/string.cpp
	$(CC) $(CFLAGS) main.cpp containers/string/string.cpp -o string.out

string_test: tests/test_string.cpp containers/string/string.cpp
	$(CC) $(CFLAGS) tests/test_string.cpp containers/string/string.cpp -o string_test.out

# Linked List build
linked_list: main.cpp containers/linked_list/linked_list.cpp
	$(CC) $(CFLAGS) main.cpp containers/linked_list/linked_list.cpp -o linked_list.out

linked_list_test: tests/test_linked_list.cpp containers/linked_list/linked_list.cpp
	$(CC) $(CFLAGS) tests/test_linked_list.cpp containers/linked_list/linked_list.cpp -o linked_list_test.out

# Clean all outputs
clean:
	rm -f *.out *.o
