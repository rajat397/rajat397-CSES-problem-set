#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int*a,max=-100000000;
    a=(int*)(malloc(n*sizeof(int)));
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("the largest number in the given array is %d\n",max);

    free(a);
    return 0;
}