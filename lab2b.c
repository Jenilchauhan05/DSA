// WAP to find power of a number using loop.

#include <stdio.h>

int main()
{
    int exponent;
    int ans = 1;
    int base;

    // Asking Base From The User
    printf("Enter The Number Of Whom You Want To Be The Base::\n ");
    scanf("%d", &base);

    // Asking Exponent From The User
    printf("Enter The Exponent For The Base %d::\n", base);
    scanf("%d", &exponent);

    // Logic of Finding The Base To The Exponent
    for (int i = 1; i <= exponent; i++)
    {
        ans = ans * base;
    }

    // Printing The Final Answer
    printf("The Answer Of Base %d To The Exponent %d Is::\n%d", base, exponent, ans);

    return 0;
}

// The Time Complexity In This Code Is:: n  O(n)