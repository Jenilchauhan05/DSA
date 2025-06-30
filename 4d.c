// Write a program to delete a number from an array that is already sorted in an ascending order. 

#include <stdio.h>

int main() {
    int n;
    int pos = -1;
    int i;
    int num;

    // Asking Size of Array
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    int a[n];

    // Asking and Storing Values
    for (i = 0; i < n; i++) {
        printf("Enter the %d-th element of the array:\n", i + 1);
        scanf("%d", &a[i]);
    }

    // Asking Number to Delete
    printf("Enter the number you want to delete:\n");
    scanf("%d", &num);

    // Finding the Position of the Number
    for (i = 0; i < n; i++) {
        if (a[i] == num) {
            pos = i;
            break;
        }
    }

    // If Number Not Exist
    if (pos == -1) {
        printf("Number not found in the array.\n");
    } else {
        
        for (i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--; 

        // Printing New Array
        printf("New array:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}