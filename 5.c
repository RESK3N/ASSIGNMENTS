// Program to take a and b input from the user and swapping the value of b into a and storing the remainder in b
#include <stdio.h>

int main()
{
   //variable declaration
   int a,b;
   //input
   printf("ENTER THE VALUE OF a >> ");
   scanf("%d",&a);
   printf("ENTER THE VALUE OF b >> ");
   scanf("%d",&b);
   a=a*b;
   b=a/b;
   a=a/b;
   b=b%a;
   //output
   printf("THE VALUE OF A IS: %d\n",a);
   printf("THE VALUE OF B IS: %d\n",b);
}