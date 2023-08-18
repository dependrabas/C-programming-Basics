#include<stdio.h>
int main()
{
      int i,a,b;
      for(a=6, b=1; b<=6;a--,b++)
      {
            for(i=1;i<a;i++)
            printf(" ");
            for(i=1;i<=b;i++)
            printf("%d ",i);
            printf("\n");
      }
      return 0;
}