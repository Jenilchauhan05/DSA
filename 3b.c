//Write A Program To Print The Addition Of All Nubers Between m And n

#include<stdio.h>
void main(){

    int m;
    int n;
    int Sum=0;


    //Input The Numbers
    printf("Enter The Starting Element m\n");
    scanf("%d",&m);

    printf("Enter The Ending Element n\n");
    scanf("%d",&n);

    //Logic Of Addition Of Num between m And n
    for (int i = m; i <= n; i++)
    {
        Sum=Sum+i;
    }

    printf("The Sum Of All Digits B/W Starting point %d And Ending point %d is = %d",m,n,Sum);
    
}