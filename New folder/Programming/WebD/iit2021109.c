#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void readInput(char *fname[], char *lname[], int *marks[]){
  for(int i=0;i<3;i++){
    
    char *fn;
    fn=(char*)malloc(sizeof(char)*100);
    char *ln;
    ln=(char*)malloc(sizeof(char)*100);
    int *m;
    m=(int*)malloc(sizeof(int));
    printf("enter the first name of student %d ",i+1);
    scanf("%s",fn);
    fflush(stdin);
    printf("enter the last name of student %d ",i+1);
    scanf("%s",ln);
    fflush(stdin);
    printf("enter the marks of student %d ",i+1);
    scanf("%d",m);
    fflush(stdin);
    
    fname[i]=fn;
    lname[i]=ln;
    marks[i]=m;
  }
}


void printOutput(char *fname[], char *lname[],int *marks[])
{
    int i;
    for( i=0;i<3;i++)
    {
        printf("Student %d: Name: %s %s; Marks: %d \n",i+1,fname[i],lname[i],*marks[i]);
    }
}

void maxMarks(char *fname[], char *lname[],int *marks[])
{
    if(*marks[0]>=*marks[1]&&*marks[0]>=*marks[2])
    {
         printf("Student 1: Name: %s %s; Marks: %d \n", fname[0],lname[0],*marks[0]);
    }
    else if(*marks[1]>=*marks[0]&&*marks[1]>=*marks[2])
    {
         printf("Student 2: Name: %s %s; Marks: %d \n", fname[1],lname[1],*marks[1]);
    }
    else if(*marks[0]>=*marks[1]&&*marks[0]>=*marks[2])
    {
         printf("Student 3: Name: %s %s; Marks: %d \n", fname[2],lname[2],*marks[2]);
    }
}

int main()
{
    char *fname[3];
    char *lname[3];
    int *marks[3];
    readInput(fname,lname,marks);
    printOutput(fname,lname,marks);
    maxMarks(fname,lname,marks);



    return 0;
}