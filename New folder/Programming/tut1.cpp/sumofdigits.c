#include<stdio.h>

int main()
{
    int num,sum=0,d;
    printf("enter any number");
    scanf("%d",&num);
    while(num>0)
    {
      d=num%10;
      sum+=d;
      num=num/10;  
    }
    printf("%d is the sum of digits",sum);
    return 0;
}