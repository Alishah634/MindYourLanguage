/*
Challenge 15: Multithreading - Create and Join Threads

Project Description:
In this challenge, you will create a program that demonstrates the use of multithreading in C.
The goal is to create multiple threads, each performing a specific task, and then wait for these
threads to complete their execution using the `pthread` library.

Steps to complete the challenge:
1. Define a function that each thread will execute. This function should take a void pointer as an
   argument and print a message indicating which thread is running.
2. Create multiple threads using `pthread_create`, passing the function and any necessary arguments.
3. Ensure that the main thread waits for all created threads to complete their execution using
   `pthread_join`.
4. Print messages to indicate the start and completion of each thread's execution.
5. Compile and run the program to verify that all threads execute and complete successfully.

The program should output messages indicating the execution of each thread and confirm that
all threads have completed their tasks before the program exits.
*/


#include <pthread.h>
#include <stdio.h>

// Function to be executed by each thread
void* threadFunction(void* arg) {
    char* message = (char*)arg;
    printf("%s is running.\n", message);
    return NULL;
}

// Function to test multithreading by creating and joining threads
void testMultithreading() {
    pthread_t thread1, thread2;

    // Creating two threads
    pthread_create(&thread1, NULL, threadFunction, "Thread 1");
    pthread_create(&thread2, NULL, threadFunction, "Thread 2");

    // Waiting for both threads to complete
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Confirming that all threads have completed
    printf("Multithreading: All threads completed.\n");
}

int main() {
    testMultithreading();
    return 0;
}
