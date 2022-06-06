#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct dob{
    int date ;
    int month;
    int year;
};
struct student{
      char name[300];
      char enrol[300];
      struct dob dobirth;
      char contactNo[10];
      char grade;
};
int main()
{
  int i,n;
  printf("enter the number of students");
  scanf("%d",&n);
  struct student*stu;
  stu=(struct student*)(malloc(n*sizeof(struct student)));
  for(i=0;i<n;i++)
  {
      fflush(stdin);
      printf("enter the name of student %d",i+1);
      gets(stu[i].name);
      fflush(stdin);
       printf("enter the enrol number of student %d",i+1);
      gets(stu[i].enrol);
      fflush(stdin);
      printf("enter the dob of student %d",i+1);
      scanf("%d",&stu[i].dobirth.date);
      scanf("%d",&stu[i].dobirth.month);
      scanf("%d",&stu[i].dobirth.year);

      fflush(stdin);
      printf("enter the contact number of student %d",i+1);
      gets(stu[i].contactNo);
      fflush(stdin);
     printf("enter the enrol grade of student %d",i+1);
     scanf("%c",&stu[i].grade);      

  } 

  for(i=0;i<n;i++)
  {
      
      printf("name of student %d is %s \n",i+1,stu[i].name);
      printf("grade of student %d is %c \n",i+1,stu[i].grade);


  }
    
    return 0;
}