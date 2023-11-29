//Write a program in c to take the values of 2 sides.If both the sides are same,calculate the area of square else calculate the area of rectangle.
#include<stdio.h>
int main()
{
    int a,b,area;
    printf("Enter the value of side 1 :\n");
    scanf("%d",&a);
    printf("Enter the value of side 2 :\n");
    scanf("%d",&b);

    if(a==b)
    {
        area=a*b;
        printf("Area of Square is:%d\n",area);
    }
    else
    {
        area=a*b;
        printf("Area of Rectangle is:%d\n",area);
    }
}
