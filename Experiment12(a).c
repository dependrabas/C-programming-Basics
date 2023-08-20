//write a c program to raed name and marks of n students and store them in the file name "student.txt".

#include<stdio.h>

void main(){
    FILE *fp;
    char Name[20];
    float Marks;
    int i,N;
    fp = fopen("student.txt","w");
    printf("Enter the number of time you want to enter data:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter your name:");
        scanf("%s",Name);
         printf("Enter your Marks:");
        scanf("%f",&Marks);


        fprintf(fp,"Student Name:%s\n Students Marks:%f",Name,Marks);
        fclose(fp);
    }
    }