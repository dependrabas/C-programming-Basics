#include<stdio.h>
int main(){
	int mins,hrs;
	printf("\n Enter any Number");
	scanf("%d", mins)
	 scanf("%d", hrs)
	 if(mins == 0)
	{printf("Error");}
	
	hrs = mins/60;
	mins = mins%60;
	printf("\n %d minutes = %d hrs");
	return 0;
}
