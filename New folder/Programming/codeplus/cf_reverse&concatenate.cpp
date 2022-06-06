#include <bits/stdc++.h>

using namespace std;
void solve(string str, int k, int cnt, set<string> s)
{
    if (cnt >= k)
    {
        cout << s.size() << "\n";
        return;
    }
    else
    {
        string rev = str;
        reverse(rev.begin(), rev.end());
        int x = s.size();
        s.insert(str + rev);
        if (s.size() > x)
        {
            cnt++;
            str += rev;
            solve(str, k, cnt, s);
        }
        // else
        // {
        //     s.insert(rev + str);
        //     if (s.size() > x)
        //     {
        //         cnt++;
        //         str = rev + str;
        //         solve(str, k, cnt, s);
        //     }
        // }
    }
}

int main()

{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        set<string> s;
        s.insert(str);
        solve(str, k, 1, s);
    }
}