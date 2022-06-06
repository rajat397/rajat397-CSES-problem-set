#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE*fp;
    char *a,*b;
    a=(char*)(malloc(200*sizeof(char)));
    printf("enter a line");
    gets(a);
    fp=fopen("testing1.txt","r+");
    fprintf(fp,"%s",a);
    fscanf(fp,"%s",b);
    printf("the output string is %s",b);
    fclose(fp);

    return 0;
}