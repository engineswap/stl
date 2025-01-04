CC = g++
CFLAGS = -std=c++17

# Default target
all: vector hashmap

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

# Clean all outputs
clean:
	rm -f *.out *.o
