//Program in C to print a square pattern with asterisk(*)
#include <stdio.h>
int main()
{
    int i,j,lim; // i= outer loops , j= inner loops , lim = limit of each side
    printf("ENTER THE LIMIT OF PATTERN >> ");
    scanf("%d",&lim); // User input
    printf("\n");
    for(i=0;i<lim;i++) //loop 1 for printing first line
    {
        printf("* ");
    }
    printf("\n"); // line separation after first line printing
    for(i=2;i<lim;i++) //loop 2
    {
        printf("*");
        for(j=2;j<lim;j++) //inner loop for printing spaces in line 2 to line lim-1
        {
            printf("  ");
        }
        printf(" *");
        printf("\n");
    }
    for(i=0;i<lim;i++) //loop 3
    {
        printf("* ");
    }
}