// Program in C to print a looping statement without using loop
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER VALUE OF n >> ");
    scanf("%d",&n);
    printf("\n");
    l1:   // list 1
    printf("HELLO WORLD !! \n");
    n--; // value updation
    if(n>-1)
    {
        goto l1; // looping back to list 1
    }

}