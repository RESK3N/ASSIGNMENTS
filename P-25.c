//Write a program in c to check whether a person is eligible to vote or not.
#include<stdio.h>
int main()
{
    int age,b;
    printf("Enter birth year:\n");
    scanf("%d",&age);
    b=2023-age;
    if(b>=18)
        printf("You are eligible to vote");
    else
        printf("You are not eligible to vote");
}