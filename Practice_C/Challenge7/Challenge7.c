/*
Challenge 7: Fibonacci Sequence

Project Description:
In this challenge, you will write a function to print the first N numbers in the Fibonacci
sequence. The function should take an integer N as input and print the first N numbers in the
Fibonacci sequence. The program should include a testing function that verifies the correctness
of the implementation using different test cases.

Steps to complete the challenge:
1. Implement the `printFibonacci` function that takes an integer N and prints the first N
   numbers in the Fibonacci sequence.
2. Create a `testPrintFibonacci` function that checks if the `printFibonacci` function works
   correctly using different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/

#include <stdio.h>

void printFibonacci(int N);


void testPrintFibonacci() {
    printf("Fibonacci Sequence: ");
    printFibonacci(10);  // Expected: 0 1 1 2 3 5 8 13 21 34
}

int main() {
    testPrintFibonacci();
    return 0;
}
