#include<stdio.h>

int main()
{
    int a,b,*p1,*p2,sum=0;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    printf("The sum of the two entered numbers is %d",sum);

    return 0;
}