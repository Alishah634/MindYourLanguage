/*
Challenge 6: Binary Search

Project Description:
In this challenge, you will implement the binary search algorithm in an array of integers.
The function should take a sorted array, its size, and a target value as input and return
the index of the target value in the array, or -1 if the target value is not found. The program
should include a testing function that verifies the correctness of the implementation using
different test cases.

Steps to complete the challenge:
1. Implement the `binarySearch` function that takes a sorted array, its size, and a target
   value and returns the index of the target value in the array, or -1 if not found.
2. Create a `testBinarySearch` function that checks if the `binarySearch` function works
   correctly using different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/

#include <stdio.h>

int binarySearch(int* arr, int size, int target);
int binarySearch(int* arr, int size, int target){
    int l = 0;
    int r = size-1;
    int mid = -1;
    while(l < r){
        mid = (r+l)/2;
        if (arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            l += 1;
        }
        else{
            r -= 1;
        }
    }
    return -1;
}

void testBinarySearch() {
    int arr[] = {1, 2, 3, 4, 5};
    printf("Binary Search (Found): %s\n", binarySearch(arr, 5, 3) == 2 ? "Passed" : "Failed");
    printf("Binary Search (Not Found): %s\n", binarySearch(arr, 5, 6) == -1 ? "Passed" : "Failed");
}

int main() {
    testBinarySearch();
    return 0;
}


