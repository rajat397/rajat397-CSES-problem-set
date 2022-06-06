#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int p = 0, x;
        string s;
        cin >> x;
        cin >> s;
        for (int i = 0; i < 14; i++)
        {
            if (s[i] == 'C')
            {
                p = p + 2;
            }
            else if (s[i] == 'D')
            {
                p = p + 1;
            }
        }
        if (p > 14)
        {
            cout << 60 * x << "\n";
        }
        else if (p == 14)
        {
            cout << 55 * x << "\n";
        }
        else if (p < 14)
        {
            cout << 40 * x << "\n";
        }
    }
}