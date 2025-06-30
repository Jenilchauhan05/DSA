// WAP to check whether a number is prime or not.

#include <stdio.h>

int main()
{
    int Num, temp = 0;

    // Asking the user to enter a number
    printf("Enter the number you want to check is prime or not:\n");
    scanf("%d", &Num);

    // Check if the number is less than or equal to 1
    if (Num <= 1)
    {
        printf("The number %d is NOT PRIME\n", Num);
        return 0; // Exit early for 0 and 1
    }

    // Check divisibility from 2 up to Num/2
    for (int i = 2; i <= Num / 2; i++)
    {
        if (Num % i == 0)
        {
            temp++; // A factor was found
            break;  // Not a prime, no need to check further
        }
    }

    // Print result based on whether any factors were found
    if (temp == 0)
    {
        printf("The number %d is PRIME\n", Num);
    }
    else
    {
        printf("The number %d is NOT PRIME\n", Num);
    }

    return 0;
}

// The Time Complexity In This Code Is:: n  O(n)