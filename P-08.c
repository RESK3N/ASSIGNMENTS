//Write a program to find out the area of a circle by taking radius by user input
#include<stdio.h>
#include<math.h> // for the value of pi
int main()
{
    int r;
    float area;
    printf("Enter the value of radius:\n");
    scanf("%d",&r);
    area=M_PI*r*r;
    printf("The area of the circle is:%f\n",area);
}