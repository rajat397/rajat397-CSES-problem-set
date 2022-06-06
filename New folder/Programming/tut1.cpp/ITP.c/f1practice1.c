#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    char name[100];
    int rno;
}stu;

void readInput(FILE*fp){
    int n,i;
    fp=fopen("D://practice1.txt","w");
    printf("enter the number of students");
    scanf("%d",&n);
        for(i=1;i<=n;i++)
    {
        stu s;
        printf("enter the name of the student %d",i);
        fflush(stdin);

        gets(s.name);
        fflush(stdin);
        fprintf(fp,"the name of the student %d is %s \t",i,s.name);
        // fputs(s.name,fp);
        // fputs("\t",fp);
        printf("enter the roll number of the student %d",i);
        scanf("%d",&s.rno);
        fprintf(fp,"the roll no of the student %d is %d \n",i,s.rno);
        // fputs("\t",fp);
        // fputs("\n",fp);
    }
      
    fclose(fp);


}


int main()
{
    FILE*fp;
    int n,i;
    // fp=fopen("D://practice1.txt","w");
    // printf("enter the number of students");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //     stu s;
    //     printf("enter the name of the student %d",i);
    //     fflush(stdin);

    //     gets(s.name);
    //     fflush(stdin);
    //     fprintf(fp,"the name of the student %d is %s \t",i,s.name);
    //     // fputs(s.name,fp);
    //     // fputs("\t",fp);
    //     printf("enter the roll number of the student %d",i);
    //     scanf("%d",&s.rno);
    //     fprintf(fp,"the roll no of the student %d is %d \n",i,s.rno);
    //     // fputs("\t",fp);
    //     // fputs("\n",fp);
    // }
      
    // fclose(fp);

    readInput(fp);
    return 0;
}