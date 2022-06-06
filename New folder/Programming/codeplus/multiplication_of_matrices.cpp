#include <bits/stdc++.h>

using namespace std;

int main()

{
    int m, n, a, b, i, j, k, p = 0;
    cout << "enter the no of rows of first matrix";
    cin >> m;
    cout << "enter the no of columns of first matrix";
    cin >> n;
    cout << "enter the no of rows of second matrix";
    cin >> a;
    cout << "enter the no of columns of second matrix";
    cin >> b;
    if (n != a)
    {
        cout << "multiplication of not possible";
    }
    else
    {
        int A[m][n], B[a][b], C[m][b];
        cout << "enter the values for first matrix";
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }
        cout << "enter the values for second matrix";
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                cin >> B[i][j];
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < b; j++)
            {   
                p=0;
                for (k = 0; k < n; k++)
                {
                    p = p +  (A[i][k] * B[k][j]);
                }
                C[i][j] = p;
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < b; j++)
            {
                cout << C[i][j];
            }
            cout << endl;
        }
    }
}