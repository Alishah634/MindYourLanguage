/*
Challenge 2: Find the Largest Number in an Array

Project Description:
In this challenge, you will write a function to find the largest number in an array of integers.
The function should take an array and its size as input and return the largest number. The program
should include a testing function that verifies the correctness of the implementation using
different test cases.

Steps to complete the challenge:
1. Implement the `findLargest` function that takes an array of integers and its size and
   returns the largest number.
2. Create a `testFindLargest` function that checks if the `findLargest` function works
   correctly using different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/

#include <stdio.h>
#include <limits.h>

int findLargest(int* arr, int size);


void testFindLargest() {
    int arr1[] = {1, 2, 3, 4, 5};
    printf("Largest: %s\n", findLargest(arr1, 5) == 5 ? "Passed" : "Failed");

    int arr2[] = {-1, -2, -3, -4, -5};
    printf("Largest: %s\n", findLargest(arr2, 5) == -1 ? "Passed" : "Failed");
}

int main() {
    testFindLargest();
    return 0;
}
