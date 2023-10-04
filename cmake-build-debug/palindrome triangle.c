//Program in C to print a triangle pattern with palindrome numbers
#include <stdio.h>
int main()
{
    int i,j,lim; //variable declaration
    int temp=0; // variable declaration and initialisation
    printf("ENTER LIMIT >> ");
    scanf("%d",&lim);
    printf("\n");
    for(i=1;i<=lim;i++) //outer loop
    {
        for(j=lim;j>=i;j--) // inner loop 1
        { //prints spaces before the triangle numbers
            printf(" ");
        }
        for(j=i;j<=temp;j++) //inner loop 2
        { //prints number upto middle
            printf("%d",j);
        }
        for(j;j>=i;j--) //inner loop 3
        { //prints number after middle
            printf("%d",j);
        }
        printf("\n");
        temp+=2; // value updation
    }
}