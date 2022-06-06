
// Define a structure to represent a cricketer's information ( name,runs, average).
// Read the data corresponding to N cricketer's in a structure array. The space for the
// array of structures should be determined at run-time by user input

#include<stdio.h>
#include<stdlib.h>

struct cricketer
{
    char name[300];
    int runs;
    float avg;
};

int main()
{

struct cricketer*cri;
int i,n;
printf("enter the number of cricketers whose information is to be stored\n");
scanf("%d",&n);
cri=(struct cricketer*)(malloc(n*(sizeof(struct cricketer))));
 
for(i=0;i<n;i++) 
{
    printf("enter the details of cricketer %d\n",i+1);

    fflush(stdin);
    printf("enter the name of the cricketer %d\n",i+1);
    gets(cri[i].name);
    printf("enter the runs scored by the cricketer %d\n",i+1);
    scanf("%d",&cri[i].runs);
    printf("enter the average of the cricketer %d\n",i+1);
    scanf("%f",&cri[i].avg);


}

printf("\n\n\n the details of cricketers entered are as follows \n\n\n");
for(i=0;i<n;i++) 
{
    printf(" the details of cricketer %d are as follows\n",i+1);

    printf(" the name of the cricketer is %s\n",cri[i].name);
    printf(" the runs scored by the cricketer are %d\n",cri[i].runs);
    printf(" the average of the cricketer is %0.2f\n\n\n",cri[i].avg);
    

}

    free(cri);
    return 0;
}