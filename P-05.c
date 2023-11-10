//Program in c to swap the values of variable a & b without using 3rd variable
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a >> \n");
    scanf("%d",&a);
    printf("Enter value of b >> \n");
    scanf("%d",&b);
    b=a+b;
    a=b-a;
    b=b-a; 
    printf("New value of A >> %d\n",a);
    printf("New value of B >> %d\n",b);
}
