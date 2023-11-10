//Program in c to perform addition,substraction,multiplication and division of two variable by taking user input.
#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER TWO NUMBER >>");
    scanf("%d %d",&a,&b);
    printf("\nAddition >> %d",a+b);
    printf("\nSubstraction >> %d",a-b);
    printf("\nMultiplication >> %d",a*b);
    printf("\nDivision >> %d ",a/b);
}