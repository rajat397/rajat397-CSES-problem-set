#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
      sort(b, b + n);
   
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                cout << "Yes"<< "\n";
                return;
            }
        }
    
    cout << "No" << "\n";
}

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}