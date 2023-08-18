//Simple interest calculation 
#include<stdio.h>
int main()
{
float rate,SI,principle,time;
printf("Enter principle Amount:");
scanf("%f",&principle);
printf("Enter Rate:");
scanf("%f",&rate);
printf("Enter Time Period:");
scanf("%f",&time);
SI = (principle*rate*time)/100;
printf("The Simple interest Amount is Rs:%f",SI);
return 0;
}