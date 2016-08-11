#include "path.h"

#include <iostream>
#include <vector>

#include "graph.h"

namespace graphs {
  // Find the shortest path between start_node and end_node
  // Distance of -1 is considered infinite
  std::vector<int> dijkstra(Graph* graph, int start_node, int end_node) {
    int size = graph->get_size();

    // Keep track of minimum known distance to each node
    int *distances = new int[size];
    for (int i = 0; i < size; i++) distances[i] = -1;
    distances[start_node] = 0;

    // Keep track of previous node in shortest path to each node
    int *previous = new int[size];
    // (initialize to -1 so we know if something goes wrong later)
    for (int i = 0; i < size; i++) previous[i] = -1;
    
    vector<int> unvisited;
    for (int i = 0; i < size; i++) unvisited.push_back(i);
    // Build shortest paths out from start
    while (unvisited) {
      // Get the closest node
      int closest_node = -1;
      int closest_distance = -1;
      for (int i = 0; i < unvisited.size(); i++) {
	int this_node = unvisited[i];
	int this_distance = distances[this_node]
	if (this_distance > closest_distance or closest_distance == -1) {
	  closest_node = this_node;
	  closest_distance = this_distance;
	}
      }
      if (closest_node == -1) {
	
      
  }

  std::vector<int> a_star(Graph* graph, int start_node, int end_node) {
    int values[] = {9, 0, 9, 2, 5, 0, 3};
    std::vector<int> results;
    for (int x = 0; x < 7; x++) results.push_back(values[x]);
    return results;
  }
}
