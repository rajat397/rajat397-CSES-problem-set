#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int



int main()
{

fastio
ll t;
cin>>t;

ll sopd[1000001]={0};
sopd[1]=1;
for(ll i=2;i*i<=1000001;i++)
{
    if(i==0)
    {
         for(int j=i;j<=1000001;j+=i)
         {
             sopd[j]=sopd[j]+j;
         }
    }
}

while(t--)
{
    ll a,b;
    cin>>a>>b;
    if(isprime())
}
}