CXX = g++
CXXFLAGS = -Wall
EXECUTABLES = p2_1

all: $(EXECUTABLES)

.cpp:
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean

clean:
	rm $(EXECUTABLES)