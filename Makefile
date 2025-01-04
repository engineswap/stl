CC = g++
CFLAGS = -std=c++14

# Default target
all: vector

# Compile main.cpp with vector.cpp
vector: main.cpp containers/vector/vector.cpp
	$(CC) $(CFLAGS) main.cpp containers/vector/vector.cpp -o vector.out

# Compile main.cpp with vector.cpp
vector_test: tests/test_vector.cpp containers/vector/vector.cpp
	$(CC) $(CFLAGS) tests/test_vector.cpp containers/vector/vector.cpp -o vector_test.out

# Clean all outputs
clean:
	rm -f *.out *.o
