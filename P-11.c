//Write a program in c to make your own currency converter.
#include<stdio.h>
int main()
{
    float rupees;
    printf("Enter the amount in Rupees:\n");
    scanf("%f",&rupees);
    printf("Amount in Dollar:%f\n",rupees*0.012);
    printf("Amount in Euro:%f\n",rupees*0.011);
    printf("Amount in Yen:%f\n",rupees*1.77);
    printf("Amount in Rubel:%f\n",rupees*1.16);
}