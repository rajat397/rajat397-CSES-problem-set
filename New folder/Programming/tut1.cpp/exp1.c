#include<stdio.h>
#include<string.h>
typedef struct{
    int roll_no;
    int age;
    char name[34];
}student;
int main()
{
    student a,b;
    a.roll_no = 12;
    a.age=18;
    strcpy(a.name,"Rajat") ;
    printf("age of the student is %d",a.age);
    printf("roll no of the student is %d",a.roll_no);
    printf("name of the student is %s",a.name);

    
    return 0;
}