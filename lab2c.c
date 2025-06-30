// WAP to reverse a number.

#include <stdio.h>

int main()
{
    int number, reverse = 0;

    // Ask user to enter a number
    printf("Enter a number to reverse:\n");
    scanf("%d", &number);

    // Logic Fo Reversing The Number
    while (number != 0)
    {
        int digit = number % 10;        // Step 1: Extract the last digit
        reverse = reverse * 10 + digit; // Step 2: Append digit to reversed number
        number = number / 10;           // Step 3: Remove last digit from the number
    }

    // Display the reversed number
    printf("Reversed Number is: %d\n", reverse);

    return 0;
}

// The Time Complexity In This Code Is:: n  O(n)