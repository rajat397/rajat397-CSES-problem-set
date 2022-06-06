// Define a structure to represent students’ information (name, roll number, cgpa).
// Read the data corresponding to N students in a structure array, and find out the
// students with the highest and lowest cgpa values.
#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[300];
    int rno;
    float cgpa;
};

int main()
{
struct student*stu,maxstu,minstu;
float max=-1.0,min=11.0;
int n,i;
printf("enter the number of students whose data is to be stored\n");
scanf("%d",&n);    
stu=(struct student*)(malloc(n*sizeof(struct student)));
for(i=0;i<n;i++)
{
    printf("enter the details of student %d\n",i+1);
    fflush(stdin);
    printf("enter the name of student %d\n",i+1);
    gets(stu[i].name);
    printf("enter the roll number of student %d\n",i+1);
    scanf("%d",&stu[i].rno);
    printf("enter the cgpa of student %d\n",i+1);
    scanf("%f",&stu[i].cgpa);

    if(max<stu[i].cgpa)
    {
        max=stu[i].cgpa;
        maxstu=stu[i];
    }

     if(min>stu[i].cgpa)
    {
        min=stu[i].cgpa;
        minstu=stu[i];
    }

    
}

printf("\n\nthe details of the student with highest cgpa are as follows\n\n");
printf("the name of the student is %s\n",maxstu.name);
printf("the roll number of the student is %d\n",maxstu.rno);
printf("the cgpa of the student is %f\n\n\n",maxstu.cgpa);


printf("the details of the student with lowest cgpa are as follows\n\n");
printf("the name of the student is %s\n",minstu.name);
printf("the roll number of the student is %d\n",minstu.rno);
printf("the cgpa of the student is %f\n\n\n",minstu.cgpa);
    free(stu);
    return 0;
}