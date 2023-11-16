//Write a program to swap the values of variable a & b without using 3rd variable and + - operators.
#include <stdio.h>
int main()
{
    //variable declaration
    int a,b;
    //input
    printf("ENTER THE VALUE OF A >> ");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B >> ");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    //output
    printf("THE VALUE OF A IS: %d\n",a);
    printf("THE VALUE OF B IS: %d\n",b);
}