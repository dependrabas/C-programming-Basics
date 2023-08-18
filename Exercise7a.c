//1.wap to accept a name from the user and print it.
//2.WAP to accept a name from the useer and find and print the lenght of the string.
//3.WAP in c to print individual character of a string in the reverse order.
//4.WAP in c to count the total number of the words.
//5.WAP in c to compare two string.
#include<stdio.h>
#include<string.h>
int main(){
char Name[25],i,size=0;
printf("Enter your Name:");
gets(Name);
printf("Hello Mr/Ms:%s",Name);
for(i=0;Name[i]!='\o';i++){
    size++;
}
printf("Lenght of the String is:%d",size);
return 0;
}