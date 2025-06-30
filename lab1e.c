// WAP to find the largest among the given three numbers by user.

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Asking Values From User
    printf("Enter The Number A:\n");
    scanf("%d", &num1);
    printf("Enter The Number B:\n");
    scanf("%d", &num2);
    printf("Enter The Number C:\n");
    scanf("%d", &num3);

    // Checking Largest Among 3
    if (num1 >= num2 && num1 >= num3)
    {
        printf("The Number A :: %d is the largest.\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The Number B :: %d is the largest.\n", num2);
    }
    else
    {
        printf("The Number C :: %d is the largest.\n", num3);
    }

    /*By Treneray Operator

    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The largest number is: %d\n", largest);*/

    return 0;
}

// The Time Complexity In This Code Is:: n  O(n)