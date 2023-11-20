//Write a program in c to find out the Simple and Compound Interest.
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci,w,a;
    printf("Enter Principal amount >>");
    scanf("%f",&p);
    printf("Enter Rate of Interest >>");
    scanf("%f",&r);
    printf("Enter Time period >>");
    scanf("%f",&t);
    si=p*r*t/100;
    a=1+r/100;
    w=pow(a,t);
    ci=p*w-p;
    printf("Simple Interest >> %f",si);
    printf("Compound Interest >> %f",ci);
}