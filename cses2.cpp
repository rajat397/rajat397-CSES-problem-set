#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin >> n;
    vector<int> v(1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n + 1; i++)
    {
        if (v[i] != i)
        {
            cout << i;
            break;
        }
    }
}