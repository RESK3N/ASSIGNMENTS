//Write a program in c to find the distance between 2 points.
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,d,e,f;
    printf("Enter the values of x1,x2,y1 and y2:\n");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    e=x2-x1;
    f=y2-y1;
    d=sqrt(((e*e)+(f*f)));
    printf("Distance:%f\n",d);
}