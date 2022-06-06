#include<stdio.h>

int fibonacci(int a)
{
    if( a==1)
    {
        return 0;
    }
    else if(a==2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(a-1)+fibonacci(a-2));
    }
}

int main()
{
    int i, n;
    printf("enter the term no till which series is to be printed");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
      printf("%d,",fibonacci(i));
    }
    return 0;
}