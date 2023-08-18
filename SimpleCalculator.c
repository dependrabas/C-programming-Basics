#include <stdio.h>  
int main()  
{  
    // declare local variables  
    char option;  
    int Num1, Num2;   
    float Result;  
    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
    scanf ("%c", &option); // take an operator  
    if (option == '/' )  
    {  
        printf (" You have selected: Division");  
    }  
    else if (option == '*')  
    {  
        printf (" You have selected: Multiplication");  
     }  
       
    else if (option == '-')  
    {  
        printf (" You have selected: Subtraction");  
     }  
        else if (option == '+')  
    {  
        printf (" You have selected: Addition");  
     }     
    printf (" \n Enter First number: ");  
    scanf(" %d", &Num1); // take fist number  
    printf (" Enter Second number: ");  
    scanf (" %d", &Num2); // take second number  
      
    switch(option)  
    {  
        case '+':  
            Result = Num1 + Num2; // add two numbers  
            printf (" Addition of %d and %d is: %.2f", Num1, Num2,Result);  
            break;  
          
        case '-':  
            Result = Num1 - Num2; // subtract two numbers  
            printf (" Subtraction of %d and %d is: %.2f", Num1,Num2,Result);  
            break;  
              
        case '*':  
            Result = Num1 * Num2; // multiply two numbers  
            printf (" Multiplication of %d and %d is: %.2f", Num1, Num2, Result);  
            break;            
          
        case '/':  
            if (Num2 == 0)   // if Num2 == 0, take another number  
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &Num2);        
                }  
            Result = Num1 / Num2; // divide two numbers  
            printf (" Division of %d and %d is: %.2f", Num1,Num2,Result);  
            break;  
        default:  /* use default to print default message */  
            printf ("Opps Something is wrong!! Please check the options ");               
    }  
    return 0;  
}  