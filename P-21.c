//Write a program in c to input a number and check whether it positive or negative.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    if(a>0)
        printf("A is positive");
    else if (a<0)
        printf("A is negative");
    else
        printf("A is zero ");
}