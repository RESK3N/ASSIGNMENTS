//Write a program in c to solve all the algebraic identities.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the values of A,B and C:\n");
    scanf("%f%f%f",&a,&b,&c);
    float s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13;
    s1=(a*a)+(2*a*b)+(b*b);
    s2=(a*a)-(2*a*b)+(b*b);
    s3=(a+b)*(a-b);
    s4=(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a);
    s5=(a*a)+(b*b)+(c*c)+(2*a*b)-(2*b*c)-(2*c*a);
    s6=(a*a)+(b*b)+(c*c)-(2*a*b)-(2*b*c)+(2*c*a);
    s7=(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a);
    s8=(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a);
    s9=(a*a*a)+(b*b*b)+((3*a*b)+(a+b));
    s10=(a*a*a)-(b*b*b)-((3*a*b)+(a-b));
    s11=(a+b)*((a*a)-(a*b)+(b*b));
    s12=(a-b)*((a*a)+(a*b)+(b*b));
    s13=(a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c);
    printf("S-1=%f\n",s1);
    printf("S-2=%f\n",s2);
    printf("S-3=%f\n",s3);
    printf("S-4=%f\n",s4);
    printf("S-5=%f\n",s5);
    printf("S-6=%f\n",s6);
    printf("S-7=%f\n",s7);
    printf("S-8=%f\n",s8);
    printf("S-9=%f\n",s9);
    printf("S-10=%f\n",s10);
    printf("S-11=%f\n",s11);
    printf("S-12=%f\n",s12);
    printf("S-13=%f\n",s13);
}