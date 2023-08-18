#include<stdio.h>
int main()
{
    int Add,Sub,Div,Mult,Num1,Num2;
    printf("Enter any Number:");
    scanf("%d",&Num1);
     printf("\nEnter another Number:");
    scanf("%d",&Num2);
    Add = Num1+Num2;
    printf("\nThe sum is %d",Add);
    Sub = Num1-Num2;
    printf("\nThe Answer is %d",Sub);
    Div = Num1/Num2;
    printf("\nThe sum is %d",Div);
    Mult = Num1*Num2;
    printf("\nThe product is %d",Mult);
    return 0;
}