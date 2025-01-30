# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -g

# Targets and dependencies
all: test

test: main.o Vector.o
	$(CXX) $(CXXFLAGS) -o test main.o Vector.o

main.o: main.cpp Vector.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Vector.o: Vector.cpp Vector.h
	$(CXX) $(CXXFLAGS) -c Vector.cpp

clean:
	rm -f *.o test
