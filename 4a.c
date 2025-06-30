#include<stdio.h>

void main() {
    int n, c, l;

    // Asking Size Of Array
    printf("Enter The No. of Elements Of Array:\n");
    scanf("%d", &n);
    int a[n + 1]; 

    // Asking And Storing Values
    for (int i = 0; i < n; i++) {
        printf("Enter The %d-th Element of Array:\n", i + 1);
        scanf("%d", &a[i]);
    }

    //Asking New Loaction And Value
    printf("Enter The Element To Insert:\n");
    scanf("%d", &c);

    printf("Enter The Location To Insert The Element (1 to %d):\n", n + 1);
    scanf("%d", &l);

    //Checking The Correct Range
    if (l>n+1 || l<1)
    {
        printf("Enter The Correct Location B/Wn Defined Range");
    }else
    { 

    //Shifting The Element
    for (int i = n; i >= l; i--) {
        a[i] = a[i - 1];
    }
    a[l - 1] = c;

    // Printing New array
    printf("New Array:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
   }
}