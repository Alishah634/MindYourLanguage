/*
Challenge 10: Depth-First Search (DFS) for Graph

Project Description:
In this challenge, you will implement the depth-first search (DFS) algorithm for a graph using
an adjacency list. The function should take a graph and a starting vertex as input and print the
vertices visited during the DFS traversal. The program should include a testing function that
verifies the correctness of the implementation using different test cases.

Steps to complete the challenge:
1. Implement the `DFS` function that takes a graph and a starting vertex and prints the vertices
   visited during the DFS traversal.
2. Create a `testDFS` function that checks if the `DFS` function works correctly using different
   test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct Graph {
    int numVertices;
    int** adjMatrix;
} Graph;

void DFS(Graph* graph, int startVertex);

void testDFS() {
    Graph* graph = malloc(sizeof(Graph));
    graph->numVertices = 4;
    graph->adjMatrix = malloc(4 * sizeof(int*));
    for (int i = 0; i < 4; i++) {
        graph->adjMatrix[i] = malloc(4 * sizeof(int));
    }

    int adjMatrix[4][4] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            graph->adjMatrix[i][j] = adjMatrix[i][j];
        }
    }

    printf("DFS Traversal: \n");
    DFS(graph, 0);
    printf("Expected Output: 0 1 3 2\n");

    for (int i = 0; i < 4; i++) {
        free(graph->adjMatrix[i]);
    }
    free(graph->adjMatrix);
    free(graph);
}

int main() {
    testDFS();
    return 0;
}

