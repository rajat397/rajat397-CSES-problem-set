#include <bits/stdc++.h>

using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long int

int main()
{

    fastio int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        if (n & 1)
        {
            if (n < 5)
                cout << -1 << endl;
            else
            {
                v.push_back(3);
                int a = 1;
                for (int i = 2; a <= n; i++)
                {
                    if (a == 3 || a == n - 3)
                    {
                        a++;
                        if (i != a)
                        {
                            v.push_back(a);
                            a++;
                        }
                    }
                    if (i == a)
                    {
                        v.push_back(a + 1);
                        v.push_back(a);
                        a += 2;
                    }

                    else
                    {
                        v.push_back(a);
                        a++;
                    }
                }
                for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" "<<endl;
                }
            }
        }
        else
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}