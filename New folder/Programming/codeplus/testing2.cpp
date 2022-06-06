#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void solve()
{
     int k=0,x,m;
    cin>>x>>m;
    if(x>pow(2,(m-1)))
    {
        cout<<0<<"\n";
        return;
    }
    while(x>2)
    {
        k++;
        x=x/2;
    }
    cout<<(m-k-1)<<"\n";
    return;
}

int main()

{

int t;
cin>>t;
while(t--)
{
    solve();
}
}