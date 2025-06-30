// WAP to calculate area of a Circle (A = πr2).

#include <stdio.h>

int main()
{
    float radius;
    float PI = 3.14;
    float area;

    // Asking The Radius And Storing It
    printf("Enter The Radius Of Circle::\n");
    scanf(" %f", &radius);

    // Area Formula
    area = radius * radius * PI;

    // Printing The Area
    printf("The Area Of Circle Is::%.2f\n", area);

    return 0;
}

// The Time Complexity In This Code Is:: n  O(n)