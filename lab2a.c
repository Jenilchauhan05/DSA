// WAP to find factorial of a number. (Using loop & recursion)

// USING LOOPS

#include <stdio.h>

int main()
{
    int fact = 1;
    int i;
    int Num;

    // Asking The Number From User Whom I Need To Find Factorial
    printf("Enter A Number Of Whom You Want To Find The Factorial::\n");
    scanf("%d", &Num);

    // Logic For Finding Factorial
    for (int i = 1; i <= Num; i++)
    {
        fact = fact * i;
    }

    // Printing The Factorial
    printf("The Factorial Of Number %d Is::\n%d", Num, fact);

    return 0;
}

// The Time Complexity In This Code Is:: n  O(n)

// USING RECURSION