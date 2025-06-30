// Write a program to implement a node structure for singly linked list. Read the data in a node, print the node.

#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct node {
    int info;
    struct node *Link;
};

struct node *first = NULL;  // Pointer to the first node

// Function to create a new node
struct node *newnode(int info) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = info;
    newnode->Link = NULL;
    return newnode;
}

int main() {
    int info;
    printf("Enter a number:\n");
    scanf("%d", &info);

    first = newnode(info);  // Assign to global 'first'
    printf("Data inside this node is: %d\n", first->info);

    free(first);  // Free memory after use
    return 0;
}