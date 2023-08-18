#include<stdio.h>
//#include<conio.h>

int main()
{
int mark1,mark2,mark3,mark4,total=0;
float avg=0.0;
//clrscr();
printf("Enter the marks in  Mathematics:");
scanf("%d",&mark1);
printf("\nEnter the marks in  Social Science:");
scanf("%d",&mark2);
printf("\nEnter the marks in  Computer studies:");
scanf("%d",&mark3);
printf("\nEnter the marks in  climatic studies:");
scanf("%d",&mark4);
total = mark1+mark2+mark3+mark4;
avg = total/4;
printf("\n Total = %d", total);
printf("\n Aggregate = %0.2f",avg);

if(avg >= 75)
printf("\nDISTINCTION");

if(avg>=60 && avg<60)
printf("\nFirst Division");

if(avg>=50 && avg<60)
printf("\nSecond Division");

if(avg>=40 && avg<50)
printf("\nThird Division");

if(avg<=40){
printf("\nYou Have Failed");}
return 0;
}