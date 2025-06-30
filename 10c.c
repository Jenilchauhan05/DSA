//WAP to check whether 2 singly linked lists are same or not.

#include<stdio.h>
#include<stdlib.h>

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

struct node *newnode2(int info) {
    struct node *newnode2 = (struct node *)malloc(sizeof(struct node));
    newnode2->info = info;
    newnode2->Link = NULL;
    return newnode2;
}

for (int i = 1; i < newnode->NULL; i++)
{
    if (newnode2->info==newnode->info)
{
    printf("Same");
}
save=newnode2->link;
temp=newnode->link;
}