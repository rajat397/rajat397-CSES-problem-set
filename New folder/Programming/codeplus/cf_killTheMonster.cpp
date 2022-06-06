#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll int hc, dc;
    cin >> hc >> dc;
    ll int hm, dm;
    cin >> hm >> dm;
    ll int k, w, a;
    cin >> k >> w >> a;
    if (hm <= dc)
    {
        cout << "yes" << "\n";
        return;
    }
    if ((hm / dc) <= (hc / dm))
    {
        cout << "yes"<< "\n";
        return;
    }
    ll int hc1 = hc;
    ll int dc1 = dc;
    for (int i = 0; i <= k; i++)
    {
        hc = hc + i * a;
        dc = dc + (k - i) * w;
        if (hm <= dc)
        {
            cout << "yes"<< "\n";
            return;
        }
        if ((hm / dc) <= (hc / dm))
        {
            cout << "yes"<< "\n";
            return;
        }
        else
        {
            hc = hc1;
            dc = dc1;
        }
    }
    cout << "no"
         << "\n";
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