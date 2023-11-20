//Write a program in c to check whether a number odd or even.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number >> ");
    scanf("%d",&a);
    if(a%2==0)
        printf("A is even");
    else
        printf("A is odd");
}
