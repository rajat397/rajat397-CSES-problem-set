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

ll n,p,k;
cin>>n>>p>>k;
ll a,b,c;
a=p%k;
b=n%k;
c=n/k;
ll ans;
if(b>a)
 ans=(c+1)*(a)+(p/k)+1;
 else if(a>b)
 {
     ans=(b+1)*(c+1)+(a-b)*c+(p/k)+1;
 }
 
 cout<<ans<<endl;
}

}