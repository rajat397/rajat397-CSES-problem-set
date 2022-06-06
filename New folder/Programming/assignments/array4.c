// Write a program that uses interchange function to swap the contents of the two
// arrays using pointers. However, the program may use array notation for initializing
// the two arrays. The size of the two arrays must be made available as a global
// variable.

#include<stdio.h>

int size=10;


void interchange(int *p1,int *p2)
{
    int i,temp;
    for(i=0;i<size;i++)
    {
       temp=*p1;
       *p1=*p2;
       *p2=temp;
       p1++;
       p2++;
    }
}
int main()
{
    int a[size];
    int b[size];
    int i;
    printf("enter the elements of the array 1\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter the elements of the array 2\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("\n\narray 1 and 2 before interchanging the elements were as follows\n\n");
    printf("array 1 :- \n");
      for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
     printf("array 2 :- \n");
      for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n\n\n\n");

    interchange(a,b);
    printf("array 1 and 2 after interchanging the elements are as follows\n\n");
      printf("array 1 :- \n");
      for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
     printf("array 2 :- \n");
      for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n\n\n\n");



    
    return 0;
}