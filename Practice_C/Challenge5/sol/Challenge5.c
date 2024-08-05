/*
Challenge 5: Matrix Multiplication

Project Description:
In this challenge, you will write a function to multiply two matrices and return the result.
The function should take two matrices and their dimensions as input and return the resulting
matrix. The program should include a testing function that verifies the correctness of the
implementation using different test cases.

Steps to complete the challenge:
1. Implement the `multiplyMatrices` function that takes two matrices and their dimensions
   and returns the resulting matrix.
2. Create a `testMultiplyMatrices` function that checks if the `multiplyMatrices` function
   works correctly using different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/

#include <stdio.h>

void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond){
    /* Thoughts:
        assuming matrix multiplication is possible:
        first result: 00*00 + 01*10 +...
        2nd   result: 10*01 + 11*11 + ...
        and so on ...
        Essentialy  all resultant elements are found by: result[row][col] += mat1[row][changing the column] * mat2[changing the row][col]
        as the changes are the same amount we can just assign a variable that iterates 0->n if mat1 is m by n and mat2 is n by z
    */

    // Check if both matrices can be multiplied:
    if(columnFirst != rowSecond){
        fprintf(stderr,"ERROR, the matrices are not of the right dimensions for matrix multiplication!!!\n");
        return;
    }

    for(int row = 0; row < rowFirst; row++){ 
        for(int col = 0; col < columnSecond; col++){
            result[row][col] = 0;
            for(int k = 0; k < rowSecond; k++){
                result[row][col] += firstMatrix[row][k] * secondMatrix[k][col];
            }
        }
    }
}

void testMultiplyMatrices() {
    int firstMatrix[10][10] = {
        {1, 2},
        {3, 4}
    };
    int secondMatrix[10][10] = {
        {5, 6},
        {7, 8}
    };
    int result[10][10] = {0};
    int expected[10][10] = {
        {19, 22},
        {43, 50}
    };

    multiplyMatrices(firstMatrix, secondMatrix, result, 2, 2, 2, 2);

    int passed = 1;
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            if (result[row][col] != expected[row][col]) {
                passed = 0;
                break;
            }
        }
    }
    printf("Matrix Multiplication: %s\n", passed ? "Passed" : "Failed");
}

int main() {
    testMultiplyMatrices();
    return 0;
}
