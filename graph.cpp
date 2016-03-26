#include "graph.h"

#include <fstream>
#include <stdexcept>
#include <string>

namespace graphs {
  AdjacencyListGraph::AdjacencyListGraph(const char filename[]) {
    std::ifstream infile(filename);
    if (!infile.is_open()) {
      std::string filename_string = filename;
      std::string msg = "couldn't open file '" + filename_string + "'";
      throw std::runtime_error(msg);
    }

    // Count size
    int inval;
    infile >> inval;
    size = 1;
    while (infile.peek() != 10) {
      infile >> inval;
      size++;
    }
    infile.seekg(0);

    // allocate matrix
    matrix = new int *[size];
    for (int x = 0; x < size; x++) matrix[x] = new int[size];

    // read in values
    for (int x = 0; x < size; x++) {
      for (int y = 0; y < size; y++) {
	infile >> matrix[x][y];
      }
    }

    infile.close();
  }

  AdjacencyListGraph::AdjacencyListGraph(int new_size) {
    size = new_size;
    matrix = new int *[size];
    for (int x = 0; x < size; x++) {
      matrix[x] = new int[size];
      for (int y = 0; y < size; y++) {
	matrix[x][y] = 0;
      }
    }
  }

  AdjacencyListGraph::~AdjacencyListGraph() {
    for (int x = 0; x < size; x++) delete[] matrix[x];
    delete[] matrix;
  }

  int AdjacencyListGraph::get_size() {
    return size;
  }

  bool AdjacencyListGraph::are_connected(int start_node, int end_node) {
    return (matrix[start_node][end_node] > 0);
  }

  int AdjacencyListGraph::distance(int start_node, int end_node) {
    return matrix[start_node][end_node];
  }

  void AdjacencyListGraph::connect(int start_node, int end_node,
				   int weight) {
    matrix[start_node][end_node] = weight;
  }
}
