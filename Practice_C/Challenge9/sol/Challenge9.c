/*
Challenge 9: Count the Number of Set Bits

Project Description:
In this challenge, you will write a function that counts the number of set bits (1s) in an
integer. The function should take an integer as input and return the number of set bits in
its binary representation. The program should include a testing function that verifies the
correctness of the implementation using different test cases.

Steps to complete the challenge:
1. Implement the `countSetBits` function that takes an integer and returns the number of set
   bits in its binary representation.
2. Create a `testCountSetBits` function that checks if the `countSetBits` function works
   correctly using different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/

#include <stdio.h>

int countSetBits(int num);

void testCountSetBits() {
    printf("Count Set Bits (5): %s\n", countSetBits(5) == 2 ? "Passed" : "Failed");
    printf("Count Set Bits (7): %s\n", countSetBits(7) == 3 ? "Passed" : "Failed");
}

int main() {
    testCountSetBits();
    return 0;
}
