// WAP to find whether a number is odd or even.

#include <stdio.h>

int main()
{
    int Num;

    // Asking The Number
    printf("Enter The Number You Want To Check::\n");
    scanf(" %d", &Num);

    // Logic Of Checking The Number[EVEN or ODD]
    if (Num % 2 == 0)
    {
        printf("The Number You Entered Is 'EVEN'\n");
    }
    else
    {
        printf("The Number You Entered Is 'ODD'\n");
    }

    return 0;
}

// The Time Complexity In This Code Is:: n  O(n)