#include <stdio.h>
#include <string.h>

struct person {
  char Name[50];
  int  Age;
  int salary;
  char designation[50];
};

int main() {
  struct person s[4];
  int i;


for(i=1;i<=5;i++){
    scanf("%s",s[i].Name);
    scanf("%d",&s[i].Age);
    scanf("%d",&s[i].salary);
    scanf("%s",s[i].designation);
}
 
  for(int i=1;i<=5;i++){
printf("Name of the person is:%s\n",s[i].Name);
printf("Age of the person is:%d\n",s[i].Age);
printf("Salary of the person is:%d\n",s[i].salary);
printf("Designation of the person is:%s\n",s[i].designation);
}

  return 0;
}
