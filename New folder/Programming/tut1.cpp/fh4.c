#include<stdio.h>

int fun(char*x)
{
    char*ptr=x;
    while(*ptr!='\0')ptr++;
    return(ptr-x);
}
int main()
{
    char str[30]="This is ITP test";
    printf("%d",fun(str));
    return 0;
}