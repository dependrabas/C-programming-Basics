//writing a program to demonstrate the usse of nested if structure.
#include<stdio.h>
void main()
{
int Num1,Num2;
printf("\nEnter any Number: ");
scanf("%d",&Num1);
printf("\nEnter another Number: ");
scanf("%d",&Num2);

if(Num1==Num2)
printf("THe value you have entered is same");
else if(Num1>Num2)
printf("THe value of Number one is greater");
 
else
printf("The value of Number 2 is greater");

}