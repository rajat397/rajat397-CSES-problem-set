#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,n3,n4,i,*ptr1,*ptr2,*ptr3,*ptr4;
    printf("enter the size of first and second array");
    scanf("%d%d",&n1,&n2);
    ptr1=(int*)(malloc(n1*sizeof(int)));
    printf("the addresses of the locations of array 1 are as follows \n");
    for(i=0;i<n1;i++)
    {
        printf("the address of location%d is %u \n",i+1,ptr1+i);

    }
    ptr2=(int*)(calloc(n2,sizeof(int)));
    printf("the addresses of the locations of array 2 are as follows \n");

    for(i=0;i<n2;i++)
    {
        printf("the address of location%d is %u \n",i+1,ptr2+i);
    }
    printf("enter the new size of array 1 and array2");
    scanf("%d%d",&n3,&n4);
    ptr1=realloc(ptr1,n1*sizeof(int));
    ptr2=realloc(ptr2,sizeof(int)*n2);
     printf("the addresses of the locations of array 1 are as follows \n");
    for(i=0;i<n3;i++)
    {
        printf("the address of location%d is %u \n",i+1,ptr1+i);

    }
      printf("the addresses of the locations of array 2 are as follows \n");

    for(i=0;i<n4;i++)
    {
        printf("the address of location%d is %u \n",i+1,ptr2+i);
    }
    free(ptr1);
    free(ptr2);

    
    }