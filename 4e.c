// Write a program to delete duplicate numbers from an array.

#include <stdio.h>
void main(){
    int n;
    int i;
    int R = 0;
    int j;
    int num;
    int pos = -1;
    int k;

    // Asking Size of Array
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    int a[n];

    // Asking and Storing Values
    for (i = 0; i < n; i++){
        printf("Enter the %d-th element of the array:\n", i + 1);
        scanf("%d", &a[i]);
    }

    // Repetation Logic
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            
            if (a[i] == a[j]){
                printf("The Number %d Is Repeated\n", a[i]);
                R = 1;

                // Finding the Position of the Number
                for (i = 0; i < n; i++){
                    for (j = i + 1; j < n; j++){
                        
                        if (a[i] == a[j]){
                            for (k = j; k < n - 1; k++){
                                a[k] = a[k + 1];
                            }
                            n--;
                            j--;
                        }
                    }
                }

                // Printing New Array
                printf("New array:\n");
                for (i = 0; i < n; i++){
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
    }

    if (!R)
    {
        printf("All Numbers Are Unique!\n");
    }
}