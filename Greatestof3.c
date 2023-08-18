#include<stdio.h>
void main()
{
int Num1,Num2,Num3;
printf("Enter first number:");
scanf("%d",&Num1);
printf("Enter Second number:");
scanf("%d",&Num2);
printf("Enter Third number:");
scanf("%d",&Num3);

    if(Num1>=Num2 && Num1>=Num3)
    printf("THe %d greatest of all!",Num1);

    if(Num2>=Num1 && Num2>=Num3)
    printf("THe %d greatest of all!",Num2);

    if(Num3>=Num1 && Num3>=Num2)
    printf("THe %d Three greatest of all!",Num3);
}
    

