int main() {
    std::vector<std::vector<int>> graph = {
        {0, 7, 9, 0, 0, 14},
        {7, 0, 10, 15, 0, 0},
        {9, 10, 0, 11, 0, 2},
        {0, 15, 11, 0, 6, 0},
        {0, 0, 0, 6, 0, 9},
        {14, 0, 2, 0, 9, 0}
    };

    std::vector<int> distances = dijkstra(graph, 0);
    for (int i = 0; i < distances.size(); ++i) {
        std::cout << "Distance from source to vertex " << i << " is " << distances[i] << std::endl;
    }

    return 0;
}
