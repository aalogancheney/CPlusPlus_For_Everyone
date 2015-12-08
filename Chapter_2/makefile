CXX = g++
CXXFLAGS = -Wall
EXECUTABLES = p2_1 p2_2

all: $(EXECUTABLES)

.cpp:
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean

clean:
	rm $(EXECUTABLES)