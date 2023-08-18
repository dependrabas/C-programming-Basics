#include <stdio.h>
int main()
{
	float m1,m2,m3,m4,m5;
	float p;
	printf("Enter your m1 marks: ");
	scanf("%f", &m1);
	printf("Enter your m2 marks:");
	scanf("%f", &m2);
	printf("Enter your m3 marks:");
	scanf("%f", &m3);
	printf("Enter your m4 marks:");
	scanf("%f", &m4);
	printf("Enter your m5 marks:");
	scanf("%f", &m5);
	p = (m1+m2+m3+m4+m5)/500*100;
	printf(" Your percentage is %.2f", p);
	return 0;
	}

