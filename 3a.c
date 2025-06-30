//Write A Program To Read And Print Value Of Number In Given Array

#include<stdio.h>
void main(){
    int i;
    int n;

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

    //Print The Values
    for (int i = 0; i < n; i++)
    {
        printf("Enter The %d nd Elements of Array a is = %d\n",i,a[i]);
    }
    
}