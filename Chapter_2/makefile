CXX = g++
CXXFLAGS = -Wall
EXECUTABLES = p2_1 p2_2 p2_3 p2_4 p2_5 p2_6 p2_7 p2_8 p2_10 p2_12 p2_14 p2_17 p2_21

all: $(EXECUTABLES)

.cpp:
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean

clean:
	rm $(EXECUTABLES)