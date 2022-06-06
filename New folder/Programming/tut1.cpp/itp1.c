#include<stdio.h>

void q1()
{
    int a =23;
    char b='r';
    float c= 5.67;
    double d=3.7890007767;
    int *ip=&a;
    char *chp=&b;
    float *flp=&c;
    double *dbp=&d;
    double *nlp=NULL;

}

void q2()
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
}

void q3()
{
     int array[]={4,5,6,74,356,45,78,3,9};
    int ans=*(&array+1)-array;
    
    printf("The size of the array is %d \n",ans);

}

void q4()
{
     char charr[]={'R','a','j','a','t','S','r','i','v','a','s','t','a','v','a'};
    int ans=*(&charr+1)-charr;
    
    printf("The size of the character array is %d \n",ans);

}

void q5()
{
     char str[40];
    int i=0,cnt=0;
    printf("enter the string to get its length :- \n ");
    scanf("%s",str);
    char *ptr=str;
    while(*ptr!='\0')
    {
       cnt++;
       ptr++;
    }
    printf("the length of the inputted string is %d \n",cnt);
}

int main()
{

printf("This program contains 5 functions and each function contains the code for its corresponding question \n");
q1();
q2();
q3();
q4();
q5();

}