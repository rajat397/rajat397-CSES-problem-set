#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[50];
};
int main()
{
    struct employee e1, e2, e3;
    printf("enter the code of  employee 1 ");
    scanf("%d",&e1.code);
    printf("enter the salary of employee 1 ");
    scanf("%f",&e1.salary);
    printf("enter the name of the employee 1 ");
    fflush(stdin);
    gets(e1.name);
     
      
    printf("enter the code of  employee 2");
    scanf("%d",&e2.code);
    printf("enter the salary of employee 2 ");
    scanf("%f",&e2.salary);
    printf("enter the name of the employee 2 ");
    fflush(stdin);
    gets(e2.name);

    printf("enter the code of  employee 3 ");
    scanf("%d",&e3.code);
    printf("enter the salary of employee 3 ");
    scanf("%f",&e3.salary);
    printf("enter the name of the employee 3 ");
    fflush(stdin);
    gets(e3.name);

    printf("code of employee 1 is %d ",e1.code);
    printf("name of employee 1 is %s ",e1.name);
    printf("salary of employee 1 is %f ",e1.salary);

    printf("code of employee 2 is %d ",e2.code);
    printf("name of employee 2 is %s ",e2.name);
    printf("salary of employee 2 is %f ",e2.salary);

    printf("code of employee 3 is %d ",e3.code);
    printf("name of employee 3 is %s ",e3.name);
    printf("salary of employee 3 is %f ",e3.salary);

    
}