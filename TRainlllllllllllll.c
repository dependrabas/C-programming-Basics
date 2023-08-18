#include<stdio.h>
void main()
{
char ch;
printf("Enter any Character:");
scanf("%c",&ch);
switch (ch)
{
case "A":
case "a":
printf("\n %c is a Vowel",ch);

    break;

case 'E':
case 'e':
printf("\n %c is a Vowel",ch);

    break;
case 'I':
case 'i':

printf("\n %c is a Vowel",ch);

    break;
case 'O':
case 'o':

printf("\n %c is a Vowel",ch);
    break;

case 'U':
case 'u':
printf("\n %c is a Vowel",ch);

    break;

default:printf("%c is not a vowel",ch);
}
}