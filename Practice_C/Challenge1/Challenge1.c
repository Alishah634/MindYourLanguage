/*
Challenge 1: Reverse a String

Project Description:
In this challenge, you will write a function to reverse a given string. The function should
take a string as input and return the string reversed. The program should include a testing
function that verifies the correctness of the implementation by comparing the output with
expected results.

Steps to complete the challenge:
1. Implement the `reverseString` function that takes a string and reverses it in place.
2. Create a `testReverseString` function that checks if the `reverseString` function works
   correctly using different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/

#include <stdio.h>
#include <string.h>

void reverseString(char* str);


void testReverseString() {
    char str1[] = "hello";
    reverseString(str1);
    printf("Reversed: %s\n", strcmp(str1, "olleh") == 0 ? "Passed" : "Failed");

    char str2[] = "world";
    reverseString(str2);
    printf("Reversed: %s\n", strcmp(str2, "dlrow") == 0 ? "Passed" : "Failed");
}

int main() {
    testReverseString();
    return 0;
}
