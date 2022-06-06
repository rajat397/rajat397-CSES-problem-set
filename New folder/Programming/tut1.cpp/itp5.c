#include<stdio.h>

int main()
{
    char str[40];
    int i=0,cnt=0;
    printf("enter the string to get its length :- ");
    scanf("%s",str);
    char *ptr=str;
    while(*ptr!='\0')
    {
       cnt++;
       ptr++;
    }
    printf("the length of the inputted string is %d",cnt);
}