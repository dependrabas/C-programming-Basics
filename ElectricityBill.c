#include <stdio.h>

void main()
{
    float unit,oldread,newread;
    float total_amt;

   
    printf("Enter new reading of Electicity: ");
    scanf("%f", &newread);
    printf("Enter oldread: ");
    scanf("%f", &oldread);

    unit =newread- oldread;
    if(unit >=0 && unit<=200)
    {
        unit *= 4;
    }
    else if(unit >=201 && unit <=400 )
    {
        unit  *= 5;
    }
    else if(unit <= 401 && unit <=600 )
    {
        unit*=6;
    }
    else if (unit>600){
        unit*=8;

    }
    total_amt += ((unit*18)/100)+50;

    printf("Electricity Bill = Rs. %.2f",total_amt);
}