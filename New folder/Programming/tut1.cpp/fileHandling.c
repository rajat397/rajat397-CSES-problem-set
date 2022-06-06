#include<stdio.h>

int main()
{
    FILE *ptr=NULL;
    ptr=fopen("myfile.txt","r");
    fgetc('a',ptr);
    // char str[4];
    // fgets(str,5,ptr);
    // printf("the string that we have read is %s ",str);
    printf("the character that we have read is %c ",);

    fclose(ptr);
    return 0;
}