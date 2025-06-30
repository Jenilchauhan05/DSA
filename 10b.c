/* Write a menu driven program to implement following operations on the singly
linked list.
• Insert a node at the front of the linked list.
• Display all nodes.
• Delete a first node of the linked list.
• Insert a node at the end of the linked list.
• Delete a last node of the linked list.
• Delete a node from specified position.
• count the number of nodes*/

// Write a program to implement a node structure for singly linked list. Read the data in a node, print the node.

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct node {
    int info;               // This stores the data value
    struct node *link;      // This points to the next node
};

struct node *first = NULL;  // Points to the first node (head) of the list

// Function declarations
struct node* insertAtFront(int);
void display();
struct node* deleteAtFront();
struct node* insertAtEnd(int);
struct node* deleteAtEnd();
struct node* deleteAtPosition(int);
int countNodes();

int main() {
    int choice, data, pos;

    while (1) {
        // Display menu
        printf("\n--- Menu ---\n");
        printf("1. Insert at Front\n");
        printf("2. Display All Nodes\n");
        printf("3. Delete First Node\n");
        printf("4. Insert at End\n");
        printf("5. Delete Last Node\n");
        printf("6. Delete from Position\n");
        printf("7. Count Nodes\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Handle user choice
        switch (choice) {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            first = insertAtFront(data);
            break;
        case 2:
            display();
            break;
        case 3:
            first = deleteAtFront();
            break;
        case 4:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            first = insertAtEnd(data);
            break;
        case 5:
            first = deleteAtEnd();
            break;
        case 6:
            printf("Enter position to delete from: ");
            scanf("%d", &pos);
            first = deleteAtPosition(pos);
            break;
        case 7:
            printf("Total nodes: %d\n", countNodes());
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Insert a node at the beginning of the list
struct node* insertAtFront(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node)); // Allocate new node
    newNode->info = data;      // Set data value
    newNode->link = first;     // Point to current first node
    first = newNode;           // Update head pointer
    return first;
}

// Display all nodes in the list
void display() {
    struct node *save = first;
    if (save == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("List: ");
    while (save != NULL) {
        printf("%d -> ", save->info);
        save = save->link;
    }
    printf("NULL\n");
}

// Delete the first node from the list
struct node* deleteAtFront() {
    if (first == NULL) {
        printf("List is empty\n");
        return NULL;
    }
    struct node *save = first;  // Pointer to the node to be deleted
    first = first->link;        // Move head to next node
    free(save);                 // Free memory of old first node
    return first;
}

// Insert a node at the end of the list
struct node* insertAtEnd(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->link = NULL;

    if (first == NULL) {
        return newNode;         // If list is empty, new node becomes the first node
    }

    struct node *save = first;
    while (save->link != NULL) {
        save = save->link;
    }
    save->link = newNode;       // Link the last node to the new node
    return first;
}

// Delete the last node from the list
struct node* deleteAtEnd() {
    if (first == NULL) {
        printf("List is empty\n");
        return NULL;
    } else if (first->link == NULL) {
        free(first);            // If only one node, free it
        return NULL;
    }

    struct node *save = first;
    struct node *pred = NULL;

    while (save->link != NULL) {
        pred = save;
        save = save->link;
    }

    pred->link = NULL;          // Disconnect the last node
    free(save);                 // Free memory of last node
    return first;
}

// Delete node from a specified position
struct node* deleteAtPosition(int pos) {
    if (first == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    if (pos == 1) {
        return deleteAtFront(); // Reuse delete at front
    }

    struct node *save = first;
    struct node *pred = NULL;
    int i = 1;

    while (save != NULL && i < pos) {
        pred = save;
        save = save->link;
        i++;
    }

    if (save == NULL) {
        printf("Position out of bounds\n");
        return first;
    }

    pred->link = save->link;    // Skip over the node to be deleted
    free(save);                 // Free memory
    return first;
}

// Count total nodes in the list
int countNodes() {
    struct node *save = first;
    int count = 0;
    while (save != NULL) {
        count++;
        save = save->link;
    }
    return count;
}