// Delete a first node of the linked list.

#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node * next;
};

void traversal(struct node *ptr) {
    while (ptr != NULL){
        printf("%d\n", ptr->info);
        ptr = ptr->next;
    }
}

struct node *deleteAtFirst (struct node *first) {
    struct node *ptr = first;
    first = first->next;
    free(ptr);
    return first;
}

int main() {
    struct node *first;
    struct node *second;
    struct node *third;
    
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    
    first->info = 5;
    first->next = second;
    
    second->info = 6;
    second->next = third;
    
    third->info = 9;
    third->next = NULL;
    
    first = deleteAtFirst(first);
    traversal(first);
    
}