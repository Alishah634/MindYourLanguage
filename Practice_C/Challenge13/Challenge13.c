/*
Challenge 13: Find the Lowest Common Ancestor in a Binary Tree

Project Description:
In this challenge, you will write a function to find the lowest common ancestor (LCA) of two nodes
in a binary tree. The function should take the root of the tree and two node values as input and
return the LCA node. The program should include a testing function that verifies the correctness
of the implementation using different test cases.

Steps to complete the challenge:
1. Implement the `findLCA` function that takes the root of the tree and two node values and returns
   the LCA node.
2. Create a `testFindLCA` function that checks if the `findLCA` function works correctly using
   different test cases.
3. Print the result of each test case to indicate whether the test passed or failed.
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* findLCA(TreeNode* root, int n1, int n2);

TreeNode* newNode(int data) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void testFindLCA() {
    TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    TreeNode* lca = findLCA(root, 4, 5);
    printf("LCA (4, 5): %s\n", lca->data == 2 ? "Passed" : "Failed");

    lca = findLCA(root, 4, 6);
    printf("LCA (4, 6): %s\n", lca->data == 1 ? "Passed" : "Failed");

    lca = findLCA(root, 3, 4);
    printf("LCA (3, 4): %s\n", lca->data == 1 ? "Passed" : "Failed");

    lca = findLCA(root, 2, 4);
    printf("LCA (2, 4): %s\n", lca->data == 2 ? "Passed" : "Failed");

    // Free the tree nodes
    free(root->left->left);
    free(root->left->right);
    free(root->right->left);
    free(root->right->right);
    free(root->left);
    free(root->right);
    free(root);
}

int main() {
    testFindLCA();
    return 0;
}
