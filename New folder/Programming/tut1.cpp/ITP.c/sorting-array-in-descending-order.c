#include<stdio.h>
void merge(int A[],int l,int m,int r)
{
    int i=l, j=m+1 , k=l , B[100];
    while(i<=m && j<=r)
    {
      if(A[i]>A[j])
      {
        B[k]=A[i];
        k++;
        i++;
      }
      else{
          B[k]=A[j];

          k++;
          j++;
      }
    }
    while(i<=m)
    {
        B[k]=A[i];
        k++;
        i++;
    }
    while(j<=r)
    {
        B[k]=A[j];
        k++;
        j++;
    }
    
    for(i=0;i<=r;i++)
    {
        A[i]=B[i];
    }
}
void mergesort(int A[],int l,int r)
{
    int m;
    if(l<r)
    {
        m = (l+r)/2;
        mergesort(A,l,m);
        mergesort(A,(m+1),r);
        merge(A,l,m,r);
    }
}


int main()
{
    int A[100],i,a;
    printf("enter the size of the array");
    scanf("%d",&a);
    printf("enter the array");
    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    mergesort(A,0,a-1);
    printf("the array sorted in descending order is\n");
    for(i=0;i<a;i++)
    {
        printf("%d ",A[i]);
        
    }
    return 0;
}