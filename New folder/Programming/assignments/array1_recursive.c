#include<stdio.h>
#include<stdlib.h>

int findmax(int a[],int size)
{
    if(size==1)
    {
       return a[0];
    }
    else{
  
        if(a[size-1]>  findmax(a,size-1))
        {
              return a[size-1];
        }
        else{
            return   findmax(a,size-1);
        }
    }
   
}

int main()
{
     int n,i;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int*a,max;
    a=(int*)(malloc(n*sizeof(int)));
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    max=findmax(a,n);
    printf("the largest element of the array is %d \n",max);
    free(a);
    return 0;
}