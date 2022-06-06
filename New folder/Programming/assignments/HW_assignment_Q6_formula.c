#include<stdio.h>
#include<math.h>
int solve(int n)
{
    return(pow(2,21)+pow(-3,19))/5;
}
int main()
{
    int ans;
    ans=solve(20);
    printf("the value of the 20th term is %d\n",ans);
    return 0;
}