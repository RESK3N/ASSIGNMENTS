//Program in C to print a diamond pattern
#include<stdio.h>
int main()
{
    int i,j,lim; // variable declaration , i for inner loop , j for outer loop , lim for limit of pattern
    printf("ENTER LIMIT OF PATTERN >> ");
    scanf("%d",&lim); //User input
    for(i=0;i<lim;i++) // loop 1 for first half of diamond
    {
        printf("\n");
        for (j = 1; j <= lim - i; j++) // prints spaces before '/'
        {
            printf(" ");
        }
        printf("/");
        for(j=1;j<=i*2;j++) // prints spaces after '/'
        {
            printf(" ");
        }
        printf("\\");

    }
    for(i=lim;i>=1;i--) // loop 2 for second half of diamond
    {
        printf("\n");
        for(j=lim;j>=i;j--) // prints spaces before '/'
        {
            printf(" ");
        }
        printf("\\"); // prints backward slash
        for(j=2;j<i*2;j++) // prints spaces after '/'
        {
            printf(" ");
        }
        printf("/"); // prints forward slash

    }
}