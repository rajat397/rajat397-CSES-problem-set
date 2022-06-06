#include <stdio.h>

int main()
{
    int i, n, A[100];
    printf("enter the number of numbers to be printed");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = n-1; i >= 0; i--)
    {
      printf("%d",A[i]);
    }
        return 0;
}