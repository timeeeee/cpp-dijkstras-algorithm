CXXFLAGS=-g -Wall
CXX=g++

all: test_graph test_path

graph.o: graph.h graph.cpp
	$(CXX) $(CXXFLAGS) -c graph.cpp

path.o: path.h path.cpp
	$(CXX) $(CXXFLAGS) -c path.cpp

graph_test: graph_test.o graph.o
	$(CXX) $(CXXFLAGS) graph_test.o graph.o -o graph_test

graph_test.o: graph_test.cpp
	$(CXX) $(CXXFLAGS) -c graph_test.cpp

path_test: path_test.o path.o graph.o
	$(CXX) $(CXXFLAGS) path_test.o path.o graph.o -o path_test

.PHONY: test_graph test_path test clean
test_graph: graph_test
	valgrind ./graph_test

test_path: path_test
	valgrind ./path_test

test: test_graph test_path

clean:
	rm -f *.o graph_test path_test *~
