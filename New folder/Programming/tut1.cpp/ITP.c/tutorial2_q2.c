#include<stdio.h>
#include<string.h>
#include<stdlib.h>
  struct student{
    int roll_no;
    char name[40];
    int age;
    char address[150];
    int marks;
};
int main()
{
    int i;
    struct student s[15];
    for(i=0;i<15;i++)
    {
        printf("enter the roll number of the student %d :",i+1);
        scanf("%d",&s[i].roll_no);
        fflush(stdin);
        printf("enter the name of the student %d :",i+1);
        gets(s[i].name);
        printf("enter the age of the student %d :",i+1);
        scanf("%d",&s[i].age);
        fflush(stdin);
        printf("enter the address of the student %d :",i+1);
        gets(s[i].address);
        printf("enter the marks of the student %d :",i+1);
        scanf("%d",&s[i].marks);
        
    }
    for(i=0;i<15;i++)
    {
        printf("\n the roll number of the student %d is %d",i+1,s[i].roll_no);
        
        printf("\n the name of the student %d is %s",i+1,s[i].name);
        
        printf("\n the age of the student %d is %d",i+1,s[i].age);

        printf(" \nthe address of the student %d is %s",i+1,s[i].address);

        printf("\n the marks of the student %d is %d",i+1,s[i].marks);
       
    }
    return 0;
}