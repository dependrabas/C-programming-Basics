#include <stdio.h>

int main()
{
    char option, ch = 'y';
    float Num1, Num2, Result = 0;
    do
    {
        printf("Please select the option from +,-,*,/");
        printf("\nEnter your choice:");
        scanf("%c", &option);
        printf("\nEnter numbers:");
        scanf("%f", &Num1);
        printf("\nEnter another numbers: ");
        scanf("%f", &Num2);
        switch (option)
        {
        case '+':
            Result = Num1 + Num2;
            printf("Result: %f", Result);
            break;
        case '-':
            Result = Num1 - Num2;
            printf("Result: %f", Result);
            break;
        case '*':
            Result = Num1 * Num2;
            printf("Result: %f", Result);
            break;
        case '/':
            Result = Num1 / Num2;
            printf("Result: %f", Result);
            break;
        default:
            printf("Invalid choice.\n");
        }

        printf("\n Do you want to continue again? \n press 'y'/'n'");
        scanf("%c", &ch);
    } while (ch == "y") 
    return 0;
}