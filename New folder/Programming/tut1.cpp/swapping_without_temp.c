#include<stdio.h>

int main()
{
   int a;
   int b;
   printf("enter first number");
   scanf("%d",&a);

   printf("enter second number");
   scanf("%d",&b);

   

    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d",a);
    printf("b=%d",b);

    return 0;
}