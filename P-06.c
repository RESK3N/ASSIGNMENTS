//C Program to to convert the value of temperature from celsius to degree fahrenheit
#include <stdio.h>
int main()
 {
     float c,f;
     printf("Enter temperature in celcius >> \n");
     scanf("%f",&c);
     f=(c*9/5)+32;
     printf("Temperature in Fahrenheit >> %f\n",f);
 }