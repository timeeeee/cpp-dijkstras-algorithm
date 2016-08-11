# coding: utf-8
=begin
1  function Dijkstra(Graph, source):
 2
 3      create vertex set Q
 4
 5      for each vertex v in Graph:             // Initialization
 6          dist[v] ← INFINITY                  // Unknown distance from source to v
 7          prev[v] ← UNDEFINED                 // Previous node in optimal path from source
 8          add v to Q                          // All nodes initially in Q (unvisited nodes)
 9
10      dist[source] ← 0                        // Distance from source to source
11      
12      while Q is not empty:
13          u ← vertex in Q with min dist[u]    // Source node will be selected first
14          remove u from Q 
15          
16          for each neighbor v of u:           // where v is still in Q.
17              alt ← dist[u] + length(u, v)
18              if alt < dist[v]:               // A shorter path to v has been found
19                  dist[v] ← alt 
20                  prev[v] ← u 
21
22      return dist[], prev[]

implement for adjacency list and adjacency matrix


=end

def dijkstra graph, source, target
  # Find the shortest path from the source node to target node.
  # graph is an adjacency matrix.
  distance = Array.new graph.length, Float::INFINITY
  distance[source] = 0  # Distance from source to source
  previous = Array.new graph.length
  unvisited = (0..(graph.length - 1)).to_a

  current = source
  while current != target
    # push to all neighbors their new shortest distance
    for neighbor in (1..(graph.length - 1))
      
    
    
end
