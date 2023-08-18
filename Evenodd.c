#include<stdio.h>
int main()
{
int Num;
printf("Enter Any Number:");
scanf("%d",&Num);
if(Num%2)
{
    printf("The number %d is Odd\n",Num);
}
else
{
    printf("The number %d is Even\n",Num);
}
return 0;
}