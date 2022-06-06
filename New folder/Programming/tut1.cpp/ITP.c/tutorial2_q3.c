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
    struct student s[5];
    for(i=0;i<5;i++)
    {
        printf("enter the roll number of the student %d :",i+1);
        scanf("%d",&s[i].roll_no);
        fflush(stdin);
        printf("enter the name of the student %d :",i+1);
        gets(s[i].name);
        printf("enter the age of the student %d :",i+1);
        scanf("%d",&s[i].age);
    }
    for(i=0;i<5;i++)
    {
        if(s[i].roll_no==2)
        {
        printf("\n the roll number of the student is %d",s[i].roll_no);
        
        printf("\n the name of the student  is %s ",s[i].name);
        
        printf("\n the age of the student  is %d",s[i].age);
        }
    
    }
    return 0;
}