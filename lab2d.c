// WAP to find factors of a given number.

#include <stdio.h>

int main()
{
    int Num;
    int temp;
    int i;

    // Asking The Number Of Whom I need To Find Factor
    printf("Enter The Number Of Whom You Want To Find The Factorial:\n");
    scanf("%d", &Num);

    // Logic Of Finding The Factor
    for (int i = 1; i <= Num; i++)
    {
        if (Num % i == 0)
        {
            // Printing The Factor
            printf("The Number %d Is Factor of %d\n", i, Num);
        }
    }
}

// The Time Complexity In This Code Is:: n  O(n)