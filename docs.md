# Documentation for Dijkstra's Algorithm Implementation

## Overview

This document provides an overview of the Dijkstra's algorithm implementation in the `dijkstra.cpp` file. The algorithm computes the shortest paths from a source vertex to all other vertices in a weighted graph with non-negative weights.

## Functions

### `dijkstra(const std::vector<std::vector<int>>& graph, int source)`

**Description:**
- Implements Dijkstra's algorithm to find the shortest paths from the source vertex to all other vertices in a graph.

**Parameters:**
- `graph`: A 2D vector where `graph[i][j]` represents the weight of the edge from vertex `i` to vertex `j`.
- `source`: The index of the source vertex.

**Returns:**
- A vector of integers where the value at each index represents the shortest distance from the source vertex to that vertex.

**Algorithm:**
- Initialize distances with infinity, except the source vertex which is set to 0.
- Use a priority queue to process vertices with the minimum distance.
- Update the distances for adjacent vertices.
- Continue until all vertices are processed.

**Code Example:**

```cpp
std::vector<int> dijkstra(const std::vector<std::vector<int>>& graph, int source) {
    int n = graph.size();
    std::vector<int> dist(n, INT_MAX);
    dist[source] = 0;
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (int v = 0; v < n; ++v) {
            if (graph[u][v] != 0 && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}
