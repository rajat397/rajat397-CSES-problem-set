#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
bool f1(vector<vector<int>> A, int i, int j)
{
    if (i == (sqrt(A.size()) - 1) && j == (sqrt(A.size()) - 1))
    {
        return true;
        exit(0);
    }
    else if (j < (sqrt(A.size()) - 1) && i < (sqrt(A.size()) - 1) && A[i][j + 1] == 0 && A[i + 1][j] == 1)
    {
        f1(A, i, j + 1);
    }
    else if (j < (sqrt(A.size()) - 1) && i == (sqrt(A.size()) - 1) && A[i][j + 1] == 0)
    {
        f1(A, i, j + 1);
    }

    else if (i < (sqrt(A.size()) - 1) && j < (sqrt(A.size()) - 1) && A[i + 1][j] == 0 && A[i][j + 1] == 1)
    {
        f1(A, i + 1, j);
    }

    else if (i < (sqrt(A.size()) - 1) && j == (sqrt(A.size()) - 1) && A[i + 1][j] == 0)
    {
        f1(A, i + 1, j);
    }
    else if (i < (sqrt(A.size()) - 1) && j < (sqrt(A.size()) - 1) && A[i + 1][j] == 0 && A[i][j + 1] == 0)
    {
        f1(A, i, j + 1);
        f1(A, i + 1, j);
    }
    else
        return false;
}

int main()
{
    int n, i, j;
    cout << "enter the order of the matrix";
    cin >> n;
    vector<vector<int>> A;
    cout << "enter the values of matrix.They should be either 0 or 1 only,first value being 0";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    if (f1(A, 0, 0) == true)
    {
        cout << " we can reach the cell N*N";
    }

    else
    {
        cout << " we cannot reach the cell N*N";
    }
}