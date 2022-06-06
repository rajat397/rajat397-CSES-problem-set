#include<stdio.h>
#include<math.h>

int main()
{
    int n,n1=0,num,cnt=0,d;
    printf("enter the number\n");
    scanf("%d",&n);
    num=n;
    while(num!=0)
    {
        cnt++;
        num=num/10;
    }
    num=n;
    while(n1!=n)
    {
        d=n%10;
        
        n1=d*pow(10,cnt-1)+num/10;
        num


    }


    return 0;
}