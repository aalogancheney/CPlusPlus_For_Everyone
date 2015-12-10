CXX = g++
CXXFLAGS = -Wall
EXECUTABLES = p3_1 p3_2

all: $(EXECUTABLES)

.cpp:
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean

clean:
	rm $(EXECUTABLES)