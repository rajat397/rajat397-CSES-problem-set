#include<stdio.h>
#include<string.h>

struct student{
    char name[30];
    int roll;
    float marks;

};
int main()
{
    struct student s;
    printf("enter the name of the student \n");
    gets(s.name)  ;
    printf("enter the roll no of the student \n");
    scanf("%d",&s.roll);
    printf("enter the marks of the student \n");
    scanf("%f",&s.marks);

    printf(" the name of the student is %s \n",s.name);
    printf(" the roll no of the student is %d \n ",s.roll);
    printf(" the marks of the student are %f \n",s.marks);

    
    
    return 0;
}