//Write a C program to find the sum of first 10 natural numbers. 

#include<stdio.h>
int main(){
int i,sum;
printf("The first 10 natural numbers are:\n");
for (i=1;i<=10;i++)
{      
sum=sum+i;
printf("\n%d ",i);
}
printf("\nThe value of sum is %d",sum);
return 0;
}