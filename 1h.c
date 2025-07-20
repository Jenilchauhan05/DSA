// Delete a last node of the linked list.

// Delete a node from specified position.

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

struct node *deleteAtLast (struct node *first) {
    struct node *ptr = first;
    struct node *q = first->next;
    
    while (q->next != NULL) {
        ptr = ptr->next;
        q = q->next;
    }
    
    ptr->next = q->next;
    free(q);
    return first;
}

int main() {
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    
    first->info = 5;
    first->next = second;
    
    second->info = 6;
    second->next = third;
    
    third->info = 9;
    third->next = fourth;
    
    fourth->info = 18;
    fourth->next = NULL;
    
    first = deleteAtLast(first);
    traversal(first);
    
}