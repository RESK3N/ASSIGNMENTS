//Program in C to print a hourglass shape with asterisk
#include <stdio.h>
int main()
{
    int i,j,lim,t; // i = outer loop , j= inner loop 1 ,k= inner loop 2, l = limit of pattern ,t= total lines
    printf("ENTER THE LIMIT OF PATTERN >> ");
    scanf("%d",&lim);
    t=(lim*2)-1;
    for (i=1;i<=t;i++)
    {
        printf("\n");
        if(i<=lim)
        {
            for (j = 0; j <= i; j++) {
                printf(" ");
            }

            for (j = lim - i; j >= 0; j--) {
                printf("* ");
            }
        }
        else
        {
            for (j = (i/2); j >= 0; j--)
            {
                printf(" ");
            }
            for (j = t-1; j >= i; j--)
            {
                printf("* ");
            }
        }

    }

}