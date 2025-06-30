// Read two 2x2 matrices and perform addition of matrices into third matrix and print it 


#include <stdio.h>

void main()
{
    int a[2][2], b[2][2], c[2][2];

    // Asking And Storing Values for Matrix A
    printf("Enter values for first matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Asking And Storing Values for Matrix B
    printf("Enter values for second matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print Resulting Matrix
    printf("Resultant Matrix (Addition of two matrices):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", c[i][j]); 
        }
        printf("\n"); 
    }
}