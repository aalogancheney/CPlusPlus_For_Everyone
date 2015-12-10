CXX = g++
CXXFLAGS = -Wall
EXECUTABLES = p3_1 p3_2 p3_3

all: $(EXECUTABLES)

.cpp:
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean

clean:
	rm $(EXECUTABLES)