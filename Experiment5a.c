// WAP to calculate a 2D matrix of size 4*5 and print that matrix.
#include <stdio.h>

void main()
{
  int arr1[4][5],i,j; 
  
 
       printf("Enter elements of the matrix :\n");
  for(i=0;i<4;i++)
  {
      for(j=0;j<5;j++)
      {
	      printf("",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<4;i++)
  {
      printf("\n");
      for(j=0;j<5;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");
}