#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the three numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is largest of 3 numbers", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is largest of 3 numbers", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is largest of 3 numbers", c);
    }
    return 0;
}