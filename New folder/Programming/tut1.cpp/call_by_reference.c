#include<stdio.h>
void swap(int*a,int*b);
int main()
{
    int a=3,b=4;
    
    printf("before swapping a is %d and b is %d\n",a,b);//a=3,b=4
    swap(&a,&b);
    printf("after swapping a is %d and b is %d\n",a,b);// after swapping a=4, b=3


    return 0;
}
void swap(int*a,int*b)
{
int temp;

temp=*a;
*a=*b;
*b=temp; 
}