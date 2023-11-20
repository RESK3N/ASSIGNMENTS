//Write a program in c to check whether the character entered by the user is a vowel or not.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("The character entered is a vowel");
    else
        printf("The character entered is a consonant");
}

