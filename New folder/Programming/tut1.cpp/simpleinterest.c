#include<stdio.h>

int main()
{
    int principal, rate,time;
    float si;
    printf("enter principal, rate,time ");
    scanf("%d",&principal);
    scanf("%d",&rate);
    scanf("%d",&time);


    si=(float)(principal*rate*time)/100;
    printf("the simple interest is %f",si);
    return 0;
}