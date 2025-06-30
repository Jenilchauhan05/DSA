// Read two matrices, first 3x2 and second 2x3, perform multiplication operation and store result in third matrix and print it. 

#include <stdio.h>

void main()
{
    int a[3][2], b[2][3], c[3][3];

    // Asking And Storing Values for Matrix A
    printf("Enter values for first matrix:\n");
    for (int i = 0; i < 3; i++)
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
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = (a[i][0]*b[0][j] + a[i][1]*b[1][j]);
        }
    }

    // Print Resulting Matrix
    printf("Resultant Matrix (Multiplication of two matrices):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]); 
        }
        printf("\n"); 
    }
}