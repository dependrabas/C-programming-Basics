#include<stdio.h>
int main(){
	float num1,i,count=0;
	printf("Enter a number: ");
	scanf("%d, &num");
	for (i=2, i<num, i++);
	{ if(num%i==0)
	{ count++;
	break;
	}}
if(count==0)
printf("\n Its a prime number");
else
printf("\n its not a prime number");
getch();
return 0;
	}
