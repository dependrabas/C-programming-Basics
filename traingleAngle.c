#include<stdio.h>
int main(){
	float a,b,c,s;
	printf("\n Enter the value of a:");
	scanf("%f",&a);
	printf("\n Enter the value of b:");
	scanf("%f",&b);
	printf("\n Enter the value of c:");
	scanf("%f",&c);
	s = (a + b + c)/2;
	printf("\n Area of Triangle = %f", &s);
    return 0;
}
