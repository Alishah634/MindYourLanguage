/*
Challenge 8: Merge Sort

Project Description:
In this challenge, you will implement the merge sort algorithm for an array of integers. The
function should take an array and its size as input and sort the array in ascending order. The
program should include a testing function that verifies the correctness of the implementation
using different test cases.

Steps to complete the challenge:
1. Implement the `mergeSort` function that takes an array and its size and sorts the array
   in ascending order.
2. Create a `testMergeSort` function that checks if the `mergeSort` function works correctly
   using different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/


#include <stdio.h>

void mergeSort(int* arr, int left, int right);

void testMergeSort() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    int expected[] = {5, 6, 7, 11, 12, 13};
    int passed = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != expected[i]) {
            passed = 0;
            break;
        }
    }
    printf("Merge Sort: %s\n", passed ? "Passed" : "Failed");
}

int main() {
    testMergeSort();
    return 0;
}
