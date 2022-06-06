#include<stdio.h>
int max_element(int A[],int n)
{
    int max=0 ,i;
   for(i=0;i<n;i++)
   {
     if(A[i]>max)
     {
         max=A[i];
     }
   
   }
     return max;
}
int main()
{
    int A[100],i,n;
    printf("\n enter the size of the array");
    scanf("%d",&n);
    printf("\n enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("the largest element of the array is %d",max_element(A,n));
    return 0;
}