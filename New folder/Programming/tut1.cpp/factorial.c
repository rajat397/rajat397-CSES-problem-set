#include<stdio.h>

int main()
{
    int i, num;
    double factorial=1;
    printf("enter the number to get factorial\n");
    scanf("%d",&num);
    for(i=1; i<=num; i++ )
    {
        factorial=factorial*i;
    }
    printf("the factorial of the entered number is %lf",factorial);
    return 0;
}