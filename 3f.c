//Read n Numbers In An Array Then Read Two Different Numbers , Replace 1st Number With 2nd Number In An Array And Print It's Index And Array.

#include <stdio.h>

void main() {
    int n, i, num1, num2;

    //Size Of Array
    printf("Enter The No. of Elements Of Array \n");
    scanf("%d",&n);
    int a[n];

    //Asking And Storing Values
     for (int i = 0; i < n; i++)
    {
        printf("Enter The %d nd Elements of Array a\n",i);
        scanf("%d",&a[i]);
    }

    //Numbers To Replace
    printf("Enter the number to be replaced: ");
    scanf("%d", &num1);
    printf("Enter the new number: ");
    scanf("%d", &num2);

    //Logic Of Replacing
    printf("Replacing %d with %d...\n", num1, num2);
    for (i = 0; i < n; i++) {
        if (a[i] == num1) {
            a[i] = num2;
            printf("Replaced at index %d\n", i);
        }
    }


    //Modified Array
    printf("Modified array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}