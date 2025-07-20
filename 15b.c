#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node * rptr;
    struct Node * lptr; 
};
struct Node * first = NULL;
struct Node * last = NULL;

//Insert a Node at the Last of the linked list
void insertAtLast() {
    int n;
    printf("Enter value: ");
    scanf("%d", &n);

    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->info = n;
    newnode->rptr = NULL;
    newnode->lptr = NULL;

    if (first == NULL) {
        first = last = newnode;
        return;
    }else{
        newnode->lptr = last;
        last->rptr = newnode;
        last = newnode;
    }
}

//Insert a Node at the Front of the linked list
void insertAtFirst() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->info = n;
    newnode->rptr = NULL;
    newnode->lptr = NULL;
    
    if(last == NULL){
        first = last = newnode;
        return;
    }else{
        newnode->rptr = first;
        first->lptr = newnode;
        first = newnode;
    } 
}

//Delete Alternate Node
void deleteAlternate() {
  
    int x = 0;
    struct Node *save = first;
    struct Node *pred = NULL;
    while (save != NULL && save ->rptr != NULL) {
        x++;
        if(x%2 == 0){
                pred = save;
                save = save->rptr;

            if (save == NULL) {
                printf("Node not found.\n");
                return;
            }

            
                pred->rptr = save->rptr;
                if(save ->rptr != NULL)
                save->rptr->lptr = save->lptr;
            
            printf("%d \n", save->info);
            free(save);
            save = pred->rptr;
            printf("Node deleted.\n");
        }
    }  
}


//Delete 
void deleteNode() {
    int y;
    printf("Enter a number to delete: ");
    scanf("%d", &y);

    struct Node *save = first;
    struct Node *pred = NULL;

    while (save != NULL && save->info != y) {
        pred = save;
        save = save->rptr;
    }

    if (save == NULL) {
        printf("Node not found.\n");
        return;
    }

    if (pred == NULL) {
        first = save->rptr;
    } else {
        pred->rptr = save->rptr;
        save->rptr->lptr = pred;
    }

    free(save);
    printf("Node deleted.\n");
}

//Display All  
void display(){
    struct Node * save = first;

    if (save == NULL) {
        printf("DoublyList is empty.\n");
        return;
    }

    while(save != NULL){
        printf("%d,",save->info);
        save = save->rptr;
    }
    printf("\n");
}

void main(){
    int choice;

    printf("\nMenu:\n");
        printf("1. Insert at first\n");
        printf("2. Insert at last\n");
        printf("5. Delete by value\n");
        printf("6. Display list\n");
        printf("7. Delete Atlernate Node\n");
        printf("0. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertAtFirst();
                break;
            case 2:
                insertAtLast();
                break;
            case 5:
                deleteNode();
                break;
            case 6:
                display();
                break;
            case 7:
                deleteAlternate();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice!\n");
        } 
    }   
}