#include <stdio.h>

int main()
{   int i;
    struct admi
    {
        char name[50];
        int accno,salary;
    }  
        
    pers[199];
    for(i=0;i<=1;i++)
    {
           
        printf("enter name\n");
        fflush(stdin);   
       scanf("%s",pers[i].name);
       printf("acc no\n");
       scanf("%d",&pers[i].accno);
        printf("salary\n");
       scanf("%d",&pers[i].salary);
     
    } for(i=0;i<=1;i++){
    printf(" input data are%s %d %d",pers[i].name,pers[i].accno,pers[i].salary);
   
    
    }
    
}