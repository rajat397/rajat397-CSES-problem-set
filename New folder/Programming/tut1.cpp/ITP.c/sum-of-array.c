#include<stdio.h>

int main()
{
    int A[100],sum=0,i,a;
    printf("enter the size of the array");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<a;i++)
    {
        sum+= A[i];
    }
    printf("the sum of the elements of the array is %d",sum);
    return 0;
}