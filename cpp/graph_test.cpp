#include <iostream>
#include <cassert>

#include "graph.h"

int main() {
  // make empty graph of size 3
  {
    std::cout << "make empty graph of size 3... ";
    graphs::AdjacencyListGraph graph(3);
    std::cout << "done.\n";
    assert(graph.get_size() == 3);

    std::cout << "looks like this - \n";
    for (int x = 0; x < 3; x++) {
      for (int y = 0; y < 3; y++) {
	assert(!graph.are_connected(x, y));
	assert(graph.distance(x, y) == 0);
	std::cout << graph.distance(x, y) << " ";
      }
      std::cout << "\n";
    }
    std::cout << "\n";
  } // test empty size 3 graph

  // make graph from file
  {
    std::cout << "make graph from file... ";
    graphs::AdjacencyListGraph graph("test.txt");
    std::cout << "done.\n";
    int size = graph.get_size();
    std::cout << "size = " << size << "\n";

    for (int x = 0; x < size; x++) {
      for (int y = 0; y < size; y++) {
	std::cout << graph.distance(x, y) << " ";
      }
      std::cout << "\n";
    }
    std::cout << "\n";
  } // test graph from file

  return 0;
}
