CXX = g++
CXXFLAGS = -Wall
EXECUTABLES = p1_1 p1_2 p1_3 p1_4 p1_5 p1_6

all: $(EXECUTABLES)

.cpp:
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean

clean:
	rm $(EXECUTABLES)
