//Program in C to check if a number is Palindrome or not
#include<stdio.h>
int main()
{
    int r=0,num,n;
    printf("ENTER A NUMBER >> ");
    scanf("%d",&n); // user input
    printf("\n");  // line separation
    num=n; //copying value of n for later evaluation
    while(n>=1) //loop
    {
        r=(r*10)+(n%10);
        n=(n/10);
    }
    if(r==num) // checking if palindrome
        printf("%d IS A PALINDROME NUMBER ",num);
    else
        printf("%d IS NOT A PALINDROME NUMBER",num);
}