/*
Challenge 3: Check for Palindrome

Project Description:
In this challenge, you will write a function to check if a given string is a palindrome. A
palindrome is a string that reads the same backward as forward. The program should include
a testing function that verifies the correctness of the implementation using different test
cases.

Steps to complete the challenge:
1. Implement the `isPalindrome` function that takes a string and checks if it is a palindrome.
2. Create a `testIsPalindrome` function that checks if the `isPalindrome` function works
   correctly using different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/


#include <stdio.h>
#include <string.h>

int isPalindrome(char* str);
int isPalindrome(char* str){
    int l = 0;
    int r = strlen(str)-1;
    while (l < r){
        if (str[l] != str[r]){
            return 0; // For failure
        }
        l += 1;
        r -= 1;
    }
    return 1; // for passing
}

void testIsPalindrome() {
    printf("Palindrome: %s\n", isPalindrome("madam") ? "Passed" : "Failed");
    printf("Palindrome: %s\n", isPalindrome("hello") ? "Failed" : "Passed");
}

int main() {
    testIsPalindrome();
    return 0;
}
