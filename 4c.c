//Write a program to insert a number in an array that is already sorted in an ascending order. 

#include<stdio.h>

void main() {
    int n, c, pos;

    //Asking Size Of Array
    printf("Enter The No. of Elements Of Array:\n");
    scanf("%d", &n);
    int a[n + 1]; 

    // Asking And Storing Values
    for (int i = 0; i < n; i++) {
        printf("Enter The %d-th Element of Array:\n", i + 1);
        scanf("%d", &a[i]);
    }

    //Asking  Value
    printf("Enter The Element To Insert:\n");
    scanf("%d", &c);

    //Logic Of Finding Location
    for (int i = 0; i < n; i++) {
        if (a[i] > c) {
            pos = i;
            break;
        }
    }

    // Shifting elements to make space
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = c;
    n++;

    //Printing New Array
    printf("New Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

}