#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void display(char *c[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        char *a;  int n;
       a=(char*)calloc(100,sizeof(char));
        printf("enter the name of student %d \n",i+1);
        scanf("%s",a);
        n=sizeof(a);
        printf("the length of the inputted string is %d",n);
        c[i]=(char*)malloc(n);
        strcpy(c[i],a);
    }
    for(i=0;i<n;i++)
    {
        // c[i]=(char*)(malloc(100*sizeof(char)));
        printf("the length of the name of student %d is %d \n",i+1,sizeof(c[i]));
        printf("the name of student %d is %s \n",i+1,c[i]);

        // scanf("%s",c[i]);
        
    }
}

int main()
{
    char *c[3];
    display(c,3);
    return 0;
}