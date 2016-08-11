#include <iostream>
#include <fstream>
#include <vector>

#include "graph.h"
#include "path.h"

int main() {
  {
    graphs::AdjacencyListGraph graph(3);

    std::vector<int> results = dijkstra(&graph, 0, 0);
    for (int x = 0; x < results.size(); x++) std::cout << results[x] << " ";
    std::cout << "\n";

    results = a_star(&graph, 0, 0);
    for (int x = 0; x < results.size(); x++) std::cout << results[x] << " ";
    std::cout << "\n";
  }

  {
    graphs::AdjacencyListGraph graph("test.txt");

    std::vector<int> results = dijkstra(&graph, 0, 0);
    for (int x = 0; x < results.size(); x++) std::cout << results[x] << " ";
    std::cout << "\n";

    results = a_star(&graph, 0, 0);
    for (int x = 0; x < results.size(); x++) std::cout << results[x] << " ";
    std::cout << "\n";
  }

  return 0;
}
