#include <stdio.h>
void main()
{
   int i,j,spc,rows=5,p;
   spc=rows+4-1;
   for(i=1;i<=5;i++)
   {
         for(p=spc;p>=1;p--)
            {
              printf(" ");
            }
                      
	   for(j=1;j<=i;j++)
	   printf("* ");
	printf("\n");
    spc--;
   }
}
