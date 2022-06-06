#include<stdio.h>

int main()
{


    int  a[10], i;

    for  (i=0; i<10; i++)
    {
        scanf ("%d",&a[i]);
    }
    
    for  (i=0; i<10; i++)
    {
        if  (a[i]==24)
        {
         printf("24 is present at index %d",i );
         break;
    }
    }



    return 0;
}