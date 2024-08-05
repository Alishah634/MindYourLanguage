/*
Challenge 14: Implement Dijkstra's Algorithm

Project Description:
In this challenge, you will implement Dijkstra's algorithm for finding the shortest path in a
weighted graph. The function should take a graph represented as an adjacency matrix and a source
vertex as input and print the shortest distances from the source to all other vertices. The program
should include a testing function that verifies the correctness of the implementation using
different test cases.

Steps to complete the challenge:
1. Implement the `dijkstra` function that takes a graph represented as an adjacency matrix and a
   source vertex and prints the shortest distances from the source to all other vertices.
2. Create a `testDijkstra` function that checks if the `dijkstra` function works correctly using
   different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/


#include <stdio.h>

void dijkstra(int graph[9][9], int src);

void testDijkstra() {
    int graph[9][9] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };

    printf("Dijkstra's Algorithm: \n");
    dijkstra(graph, 0);
    printf("Expected Output: Distance from source 0 to vertex i\n");
}

int main() {
    testDijkstra();
    return 0;
}
