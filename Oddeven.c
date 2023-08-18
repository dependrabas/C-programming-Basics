#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
int r = a%2;
if(a==1){
	printf("%d is odd number",a);
} 
else{
printf("%d is even number",a);
}
return 0;
}
