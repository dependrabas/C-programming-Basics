#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter a value Number:");
	scanf("%d",&a);
	printf("\n Enter b value Number:");
	scanf("%d",&b);
	if(a==b)
	{
	printf("\n Your Entry is incorrect ");}
	
	else
	{
	int c = a + b;
	printf("\n The sum is %d",c);}
	
	return 0;
}
