CXX = g++
CXXFLAGS = -g -Wall

all: p1_1
	rm -rf *.dSYM

p1_1: p1_1.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean

clean:
	rm p1_1
