//Write a program in c to calculate the area of regular hexagon.
#include<stdio.h>
int main()
{
    float a,s,area;
    printf("Enter the length of sides of the hexagon :\n");
    scanf("%f",&a);
    area=2.598*(a*a);//3 root (3) equals 5.196 , div by 2 equals 2.598
    printf("Area of hexagon is:%f\n",area);
}