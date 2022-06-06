#include<stdio.h>

int main()
{
    int a,b, *p1,*p2,max;
    p1=&a;
    p2=&b;
    printf("enter any two numbers\n");
    scanf("%d %d",p1,p2);
    if(*p1>*p2)
    {
      max=*p1;
    }
    else{
        max=*p2;
    }
    printf("the maximum number between the two entered numbers is %d",max);
    return 0;
}