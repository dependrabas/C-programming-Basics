#include<stdio.h>
int main()
{
int Num,Temp,Rev,Rem=0;
printf("Enter any Number:");
scanf("%d",&Num);
while (Num>0)
{
    Rem= Num%10;
    Rev= 10*Rev+Rem;
    Num = Num/10;
}
if(Rev==Num)
printf("The number is Palindrone");
else
{printf("The number is not Palindrone");}
return 0;
}
