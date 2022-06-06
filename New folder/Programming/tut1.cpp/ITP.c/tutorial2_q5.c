#include<stdio.h>
int check_num(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    if (check_num(n) == 1)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}