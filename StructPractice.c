#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[20];
    int Roll_No;
    int phone;
};
int main(){
    struct student s1;
    scanf("%s",s1.name);
    scanf("%d",s1.Roll_No);
    scanf("%d",s1.phone);
    printf("Name:%s",name);
    printf("Roll No:%d",s1.Roll_No);
    printf("Phone:%d",s1.phone);

    return 0;
}
