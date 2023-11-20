//Write a program in c to input 2 number and find the larger among the two.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of A and B:");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("\nA is greater");
    else if (a<b)
        printf("\nB is greater");
    else
        printf("\nBoth are same");
}