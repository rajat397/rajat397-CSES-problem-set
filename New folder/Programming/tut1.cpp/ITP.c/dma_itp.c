#include<stdio.h>
#include<stdlib.h>
void printArray(int*ptr,int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",*(ptr+i));
    printf("\n");
}

int main()
{
    int n1,n2,n3,i,*ptr1,*ptr2,*ptr3;
    printf("enter the size of two  arrays");
    scanf("%d%d",&n1,&n2);
    ptr1=(int*)(malloc(n1*sizeof(int)));
    ptr2=(int*)(calloc(n2,sizeof(int)));
    printf("enter the elements of the first array");
    for(i=0;i<n1;i++)
    {
        scanf("%d",ptr1+i);
    }
    printArray(ptr1,n1);
    printf("enter the elements of the second array");
    for(i=0;i<n2;i++)
    {
        scanf("%d",ptr2+i);

    }
    printArray(ptr2,n2);
   
    printf("enter the new size of array 1");
    scanf("%d",&n3);
     ptr3=(int*)(realloc(ptr1,n3*sizeof(int)));
 

    printf("enter the elements to be added to the array 1");
    for(i=n1;i<n3;i++)
    {
        scanf("%d",ptr3+i);
    }
    printArray(ptr3,n3);
    free(ptr1);
    free(ptr2);
    free(ptr3);
    printf("the value of ptr1 is %x",ptr1);
}