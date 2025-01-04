CC = g++
CFLAGS = -std=c++14

all:
	$(CC) $(CFLAGS) main.cpp vector.cpp -o a.out

clean:
	rm -f a.out