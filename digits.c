//Program in C to find the number of digits in a number
#include <stdio.h>
int main()
{
    int i,n,flag=0; // variable declaration , i for inner loop , n for numerical input , flag counts the digits
    printf("ENTER A NUMBER >> ");
    scanf("%d",&n); // User input
    while(n!=0) //loop
    {
        n=n/10; // value updation
        flag++; // digit count
    }
    printf("\nTHE NUMBER OF DIGITS >> %d",flag); // Output
}