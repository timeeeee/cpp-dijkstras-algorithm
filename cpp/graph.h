#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <string>

namespace graphs {
  /* Interface for a graph */
  class Graph {
  protected:
    int size;
  public:
    virtual int get_size() =0;
    virtual bool are_connected(int start_node, int end_node) =0;
    virtual int distance(int start_node, int end_node) =0;
    virtual void connect(int start_node, int end_node, int weight) =0;
  };

  /* adjacency list graph */
  class AdjacencyListGraph : public Graph {
  private:
    int **matrix;
  public:
    AdjacencyListGraph(const char filename[]);
    AdjacencyListGraph(int new_size);
    ~AdjacencyListGraph();
    int get_size();
    bool are_connected(int start_node, int end_node);
    int distance(int start_node, int end_node);
    void connect(int start_node, int end_node, int weight);
  };

  /*
    class GraphNode {};
    class LinkedNodesGraph : public Graph {};
  */
}
    
#endif
