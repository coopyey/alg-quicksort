CXX=g++
CXXFLAGS=-O2 -c -std=c++14 -Wall
LDFLAGS=
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE= quicksort

all: $(SOURCES) $(EXECUTABLE) cleanobj

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $(EXECUTABLE)

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

cleanobj:
	rm -rf $(OBJECTS)

rebuild: clean cleanout $(EXECUTABLE) cleanobj

cleanout:
	rm -rf output.txt