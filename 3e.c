//Write A Program To Find Weather The Array Contains Different Number Or Not

#include<stdio.h>
void main(){
    int n;
    int i;
    int R=0;
    int j;

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

    //Repetation Logic
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("The Number %d Is Repeated\n", a[i]);
                R = 1;
            }
        }
    }

    if (!R) {
        printf("All Numbers Are Unique!\n");
    }
}