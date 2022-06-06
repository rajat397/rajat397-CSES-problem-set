// Write a program that accepts word as a string input. Using pointer to a character
// array and without using array notation, compute the length of the string until the
// NULL character is encountered.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char*str;
    int cnt=0,i;
    printf("enter the word\n");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
         cnt++;
    }
    printf("the length of the entered word is %d\n",cnt);
    return 0;
}