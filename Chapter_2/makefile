CXX = g++
CXXFLAGS = -Wall
EXECUTABLES = p2_1 p2_2 p2_3 p2_4 p2_5 p2_6

all: $(EXECUTABLES)

.cpp:
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean

clean:
	rm $(EXECUTABLES)