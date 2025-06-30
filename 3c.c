//Write A Program For Average Of The First n Numbers.

#include<stdio.h>
void main(){

    int n;
    int Sum=0;
    float avg;

    //Input n
    printf("Enter The Value Of n \n");
    scanf("%d",&n);

    //Logic Of Addition Of Numbers
    for (int i = 1; i <= n; i++)
    {
        Sum=Sum+i;
    }

    //Average Of The First n Numbers
    avg= (float)Sum/n;
    printf("The Average Of The %d Numbers Is=%f",n,avg);
}