#ifndef __PATH_H__
#define __PATH_H__

#include "graph.h"

#include <vector>

namespace graphs {
  std::vector<int> dijkstra(Graph* graph, int start, int end);
  std::vector<int> a_star(Graph* graph, int start, int end);
}

#endif
