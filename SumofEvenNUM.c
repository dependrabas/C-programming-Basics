//Write a C  program to calculate the sum of first n even numbers.

#include<stdio.h>
int main()
{
      int i=1,Num,s=0;
      printf("Enter number to set range : ");
      scanf("%d",&Num);
      printf("\nEven numbers in range 1 to %d :\n\n",Num);
      for(i=1;i<=Num;i++)
      {
            if(i%2==0)
            {
                  printf("%d  ",i);
                  s=s+i;
            }
      }
      printf("\n\nSum of even numbers in range 1 to %d : %d",Num,s);
      return 0;
}

