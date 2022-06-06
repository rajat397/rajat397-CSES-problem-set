#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
double n,k;
cin>>n>>k;

if(n<=k)
{
long long int ans=ceil(k/n);
cout<<ans<<"\n";
}
else{

    k=ceil(n/k)*k;

long long int ans=ceil(k/n);
cout<<ans<<"\n";
}
}
}