//Write a program to delete a number from a given location in an array.

#include <stdio.h>

int main() {
    int n, pos, i;

    //Asking Size Of Array
    printf("Enter The No. of Elements Of Array \n");
    scanf("%d",&n);
    int a[n];

    //Asking And Storing Values
    for (int i = 0; i < n; i++) {
        printf("Enter The %d-th Element of Array:\n", i + 1);
        scanf("%d", &a[i]);
    }

    // Taking input for position to delete
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    //Checking The Correct Range
    if (pos>n || pos<1)
    {
        printf("Enter The Correct Location B/Wn Defined Range");
    }else
    { 
        
    // Deleting element
    for(i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--; 

    // New array
    printf("New array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

    return 0;
}