#include<stdio.h>

int main()
{
    int a=5;
    char b='r';
    float c= 4.563;
    int *p=&a;
    char *q=&b;
    float *m=&c;
    printf("\n the value of a is:- %d",*p);
    printf("\n the address of a is:- %x",p);
    printf("\n the value of b is:- %c",*q);
    printf("\n the address of b is:- %x",q);
    printf("\n the value of c is:- %f",*m);
    printf("\n the address of c is:- %x",m);
    return 0;
}