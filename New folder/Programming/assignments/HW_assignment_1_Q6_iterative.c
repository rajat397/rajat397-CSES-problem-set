#include<stdio.h>

int calculate(int n)
{
    int i;
    // int ans[20];
    int a=1,b=1,c;
    for(i=3;i<=n;i++)
    {
        c=6*a-b;
        a=b;
        b=c;

    //    ans[i]=6*ans[i-2]-ans[i-1];
    }
    return c;
}
int main()
{
    int ans;
    ans = calculate(20);
    printf("the value of the 20th term is %d",ans);
    return 0;
}