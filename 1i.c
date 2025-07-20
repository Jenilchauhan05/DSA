// Delete a node from specified value.

#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node * next;
};

struct node *insert(struct node *first, int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = data;
    newnode->next = NULL;
    
    if (first == NULL) {
        return newnode;
    }
    
    struct node *temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newnode;
    return first;
}

void traversal(struct node *ptr) {
    printf("linked list elements :\n");
    while (ptr != NULL){
        printf("%d->", ptr->info);
        ptr = ptr->next;
    }
    printf("null\n");
}

struct node *deleteAtValue (struct node *first, int value) {
    if (first == NULL) {
        printf("List is empty.\n");
        return NULL;
    }

    struct node *ptr = first;
    struct node *q = first->next;

    if (first->info == value) {
        first = first->next;
        free(ptr);
        return first;
    }

    while (q != NULL && q->info != value) {
        ptr = ptr->next;
        q = q->next;
    }

    if (q == NULL) {
        printf("Value %d not found in the list.\n", value);
        return first;
    }

    ptr->next = q->next;
    free(q);
    return first;
}


int main() {
    struct node *first = NULL;
    int val;
    printf("enter values to add in link list (enter -1 to stop)");
    
    while (1) {
        scanf("%d", &val);
        
        if (val == -1) {
            break;
        }
        
        first = insert(first, val);
    }
    
    printf("enter value to delete from list :");
    scanf("%d", &val);
    first = deleteAtValue(first, val);
    traversal(first);
    
}