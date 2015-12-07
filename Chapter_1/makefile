CXX = g++
CXXFLAGS = -g -Wall

all: p1_1 p1_2 p1_3 p1_4
	rm -rf *.dSYM

run: all
	./p1_1
	./p1_2
	./p1_3
	./p1_4

p1_1: p1_1.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

p1_2: p1_2.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

p1_3: p1_3.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

p1_4: p1_4.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean

clean:
	rm p1_1 p1_2 p1_3 p1_4
