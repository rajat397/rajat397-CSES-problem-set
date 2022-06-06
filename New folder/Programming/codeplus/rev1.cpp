#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

bool isprime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
     return 1;

}
int main()
{
ll n;
cin>>n;
cout<<isprime(n);
fastio

}