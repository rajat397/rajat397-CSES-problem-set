#include <stdio.h>
int main()
{
    int a,w,i,num;
    printf("Enter the range from 1 number\n");
    scanf("%d", &a);
    for ( w = 1; w <= a; w++)
    {
        num = 0;
        for (i = 1; i < w + 1; i++)
        {
            if (w % i == 0)
            {
                num = num + i;
                printf("num");
            }
        }
        if (w == num)
        {
            printf("\nThe perfect number is %d", num);
        }
    }

    return 0;
}