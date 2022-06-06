#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

int main()
{

fastio
ll t;
cin>>t;
while(t--)
{
    ll n,m,l;
    cin>>n>>m>>l;
    ll a=(m)%(l+n-1);
    if(n==0)
    {
        cout<<m<<endl;
    }
    if(a<l)
    {
        cout<<a<<endl;

    }   
    else
    {
        cout<<0<<endl;
    }

  
}
}