// Write A Program to Find Position Of The Smallest number And The Largest Number From Given n Number

#include <stdio.h>

void main()
{
    int n, i;
    int min = 0, max = 0;

    //Size Of Array
    printf("Enter The No. of Elements Of Array \n");
    scanf("%d", &n);

    int a[n];

    //Asking And Storing Values
    for (int i = 0; i < n; i++)
    {
        printf("Enter The %d nd Elements of Array a\n", i);
        scanf("%d", &a[i]);
    }

    //Min Max Logic
    for (i = 1; i < n; i++)
    {
        if (a[i] < a[min])
        {
            min = i;
        }
        if (a[i] > a[max])
        {
            max = i;
        }
    }

    printf("Smallest number is %d at position %d\n", a[min], min  + 1);
    printf("Largest number is %d at position %d\n", a[max], max  + 1);
}