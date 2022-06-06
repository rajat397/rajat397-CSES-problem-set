#include<stdio.h>

int main()
{
    int num,rev=0,d;
    printf("enter a number to get reverse of it");
    scanf("%d",&num);
    
    while(num>0)
    {
        d=num%10;
        rev=rev*10 + d;
        num=num/10;
    }
    printf("%d is the reverse of num",rev);

    return 0;
}