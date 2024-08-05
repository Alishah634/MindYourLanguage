/*
Challenge 11: Dynamic Memory Allocation for a 2D Array

Project Description:
In this challenge, you will write a function that dynamically allocates memory for a 2D array
and initializes it. The function should take the number of rows and columns as input and return
a pointer to the allocated 2D array. The program should include a testing function that verifies
the correctness of the implementation using different test cases.

Steps to complete the challenge:
1. Implement the `allocate2DArray` function that takes the number of rows and columns and returns
   a pointer to the allocated 2D array.
2. Create a `testAllocate2DArray` function that checks if the `allocate2DArray` function works
   correctly using different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/


#include <stdio.h>
#include <stdlib.h>

int** allocate2DArray(int rows, int cols);

void testAllocate2DArray() {
    int rows = 3;
    int cols = 3;
    int** array = allocate2DArray(rows, cols);

    int passed = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] != 0) {
                passed = 0;
                break;
            }
        }
    }

    printf("Allocate 2D Array: %s\n", passed ? "Passed" : "Failed");

    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
}

int main() {
    testAllocate2DArray();
    return 0;
}
