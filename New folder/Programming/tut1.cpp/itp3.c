#include<stdio.h>

int main()
{
    int array[]={4,5,6,74,356,45,78,3,9};
    int ans=*(&array+1)-array;
    
    printf("The size of the array is %d",ans);

    return 0;
}