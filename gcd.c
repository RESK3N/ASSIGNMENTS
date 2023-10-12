//Program in C to find the (hcf/gcd) highest common factor of a number
#include <stdio.h>
int main()
{
    int a,b,i=1,h,hcf;
    printf("ENTER TWO NUMBERS >> ");
    scanf("%d%d",&a,&b);
    if(a>b) //if else codition to find the larger number between a and b
    {
        h=a;
    }else if (b>a)
    {
        h=b;
    }

    while(i<=h) //loop
    {
        if(a%i==0&&b%i==0)
        {
            hcf = i;
        }
        i++;
    }
    printf("\nTHE HIGHEST COMMON FACTOR OF %d AND %d IS %d",a,b,hcf);
}