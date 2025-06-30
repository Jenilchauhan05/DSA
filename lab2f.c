// WAP to print prime numbers between given interval.

#include <stdio.h>

int main()
{
    int Num1, Num2;

    // Asking the user to enter the lower bound of the range
    printf("Enter the number 1 [Lower Bound]\n");
    scanf("%d", &Num1);

    // Asking the user to enter the upper bound of the range
    printf("Enter the number 2 [Upper Bound]\n");
    scanf("%d", &Num2);

    // Loop through each number in the interval
    for (int i = Num1; i <= Num2; i++)
    {
        int temp = 0; // Reset flag for each number

        // Skip numbers less than 2 (not prime)
        if (i < 2)
            continue;

        // Check if 'i' is divisible by any number from 2 to i-1
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                temp = 1; // Found a divisor, not a prime
                break;    // No need to check further
            }
        }

        // If no divisor found, it's prime
        if (temp == 0)
            printf("The Number %d Is Prime\n", i);
    }

    return 0;
}

// The Time Complexity In This Code Is:: n  O(n)