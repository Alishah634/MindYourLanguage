/*
Challenge 12: Implement a Stack Using an Array

Project Description:
In this challenge, you will implement a stack data structure using an array with push, pop, and
peek operations. The program should include a testing function that verifies the correctness of
the implementation by performing a series of operations on the stack and checking the results.

Steps to complete the challenge:
1. Implement the `createStack` function to initialize the stack.
2. Implement the `push` function to add elements to the stack.
3. Implement the `pop` function to remove elements from the stack.
4. Implement the `peek` function to return the top element of the stack without removing it.
5. Create a `testStack` function that performs a series of push, pop, and peek operations to check
   if the stack operations work correctly.
6. Print the result of each operation to indicate whether the test passed or failed.
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int top;
    int capacity;
    int* array;
} Stack;

Stack* createStack(int capacity);
void push(Stack* stack, int item);
int pop(Stack* stack);
int peek(Stack* stack);

void testStack() {
    Stack* stack = createStack(5);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Stack Pop: %s\n", pop(stack) == 30 ? "Passed" : "Failed");
    printf("Stack Peek: %s\n", peek(stack) == 20 ? "Passed" : "Failed");

    free(stack->array);
    free(stack);
}

int main() {
    testStack();
    return 0;
}
