#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void solve()
{
    int a, q, r, k, p;
    string s;
    cin >> k >> p;
    if (p > pow(26, k))
    {
        cout << -1 << "\n";
        return;
    }
    
    a = floor(log(p) / log(26));
    if (a==0)
    {
        for (int i = a + 1; i < k; i++)
        {
            s += 'a';
        }
        s += (97 + p - 1);
        cout<<s;
        return;
    }
    q = p / pow(26, a);
    r = p % int(pow(26, a));

    for (int i = a + 1; i < k; i++)
    {
        s += 'a';
    }
    s += (97 + q);
    for (int i = a - 1; i >= 0; i--)
    {
        q = r / pow(26, i);
        r = r % int(pow(26, i));
        s += (97 + q);
    }
    cout << s << "\n";
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