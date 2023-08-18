//WAP to determine whether an entered characer is a charater vowel or Not.
#include<stdio.h>
void main()
{ char ch;
printf("Enter Any Alphapet:");
scanf("%c",&ch);
switch
{ 
    case 'A':
    case 'a':

    printf("%c is Vowel",ch);
    break;
    case 'E':
    case 'e':
    printf("\n %c is Vowel",ch);
    break;
    case 'I';
    case 'i';
    printf("\n %c is Vowel",ch);
    break;
    case 'O':
    case 'o':
    printf("\n %c is Vowel",ch);
    break;
    case 'U':
    case 'u':
    printf("\n %c is Vowel",ch);
    break;
    default:printf("%c is not Vowel", ch);
}
}