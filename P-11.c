//Write a program in c to make your own currency converter.
#include<stdio.h>
int main()
{
    float r;
    printf("Enter the amount in Rupees:\n");
    scanf("%f",&r);
    printf("Amount in Dollar:%f\n",r*0.012);
    printf("Amount in Euro:%f\n",r*0.011);
    printf("Amount in pound :%f\n",r*0.0096);
    printf("Amount in Yen:%f\n",r*1.795);
    printf("Amount in Rubel:%f\n",r*1.07);
}