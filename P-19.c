//Write a program in c to take the name,program,e-mail ID,birth year of the student and calculate the age and display all the details.
#include<stdio.h>
int main()
{
    char name[30],prg[20],email[30];
    int year;
    printf("Enter name:\n");
    gets(name);
    printf("Enter Program:\n");
    gets(prg);
    printf("Enter E-Mail:\n");
    scanf("%s",&email);
    printf("Enter Bith Year:\n");
    scanf("%d",&year);
    printf("------------------------\n");
    printf("Your name:%s\n",name);
    printf("Your program:%s\n",prg);
    printf("Your e-mail:%s\n",email);
    printf("Your age:%d\n",2023-year);
}