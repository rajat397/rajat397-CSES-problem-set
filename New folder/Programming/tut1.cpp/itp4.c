#include<stdio.h>

int main()
{
    char charr[]={'R','a','j','a','t','S','r','i','v','a','s','t','a','v','a'};
    int ans=*(&charr+1)-charr;
    
    printf("The size of the array is %d",ans);

    return 0;
}