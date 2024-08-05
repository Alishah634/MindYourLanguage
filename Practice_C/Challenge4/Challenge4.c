/*
Challenge 4: Simple Linked List Implementation

Project Description:
In this challenge, you will implement a simple singly linked list with functions to insert,
delete, and display elements. The program should include a testing function that verifies
the correctness of the implementation by performing a series of operations on the linked
list and checking the results.

Steps to complete the challenge:
1. Implement the `insert` function to add elements to the linked list.
2. Implement the `delete` function to remove elements from the linked list.
3. Implement the `display` function to print the elements of the linked list.
4. Create a `testLinkedList` function that performs a series of insertions, deletions,
   and displays to check if the linked list operations work correctly.
5. Print the list after each operation to indicate the current state of the list.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insert(Node** head, int data);
void delete(Node** head, int key);
void display(Node* head);


void testLinkedList() {
    Node* head = NULL;
    fprintf(stderr,"testLinkedList:\n");
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head,4);

    printf("List after inserts: ");
    display(head);

    delete(&head, 4);
    printf("List after deleting 2: ");
    display(head);

    delete(&head, 2);
    printf("List after deleting 2: ");
    display(head);

    delete(&head, 1);
    printf("List after deleting 1: ");
    display(head);
}

int main() {
    testLinkedList();
    return 0;
}
