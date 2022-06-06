#include<stdio.h>

void merge(int M[], int l, int m, int r)
{
    int N[100], i = l, j = m + 1, k = l;
    while (i <= m && j <= r)
    {

        if (M[i] < M[j])
        {
            N[k] = M[i];
            k++;
            i++;
        }
        else
        {
            N[k] = M[j];
            k++;
            j++;
        }
    }
    while (i <= m)
    {
        N[k] = M[i];
        k++;
        i++;
    }
    while (j <= r)
    {

        N[k] = M[j];
        k++;
        j++;
    }
    i = 0;
    for (i = 0; i <= r; i++)
    {
        M[i] = N[i];
    }
}

void mergeSort(int A[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(A, l, m);
        mergeSort(A, (m + 1), r);
        merge(A, l, m, r);
    }
}

int main()
{
    int A[100], B[100], C[100], i, j, k, a, b, p, max, size_c;
    printf("enter size of first array\n");
    scanf("%d", &a);
    printf("enter first array\n");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("enter size of second array\n");
    scanf("%d", &b);
    printf("enter second array\n");
    for (i = 0; i < b; i++)
    {
        scanf("%d", &B[i]);
    }
    mergeSort(A, 0, a - 1);
    mergeSort(B, 0, b - 1);
    i = 0, j = 0, k = 0;
    while (i < a && j < b)
    {
        if (A[i] == B[j])
        {

            C[k] = A[i];
            k++;
            i++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    if (k == 0)
    {
        printf("\n No common elements in sorted arrays");
    }
    else
    {
        max = C[0];
        for (p = 1; p < k; p++)
        {
            if (max < C[p])
            {
                max = C[p];
            }
        }

        printf("\nthe largest number in the intersection of the  2 arrays is %d", max);
    }
    return 0;
}