#include <bits/stdc++.h>

using namespace std;

int main()

{

    int t;
    cin >> t;
    while (t--)
    {
        int n,o=0,e=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]&1) o++;
            else e++;

        }
        if(o==1&&e==0)
        {
            cout<<1<<"\n";

        }
        else if(o&1)
        {
            cout<<2<<"\n";
        }
        else
        {
            cout<<1<<"\n";
            
        }

    }
}