#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

int main()
{

fastio
int n,m;
cin>>n>>m;
int a[n];
ll sum=0,ans;
for(int i=0;i<n;i++)
{
cin>>a[i];
sum+=a[i];
}
ans=sum;
sort(a,a+n);
int l=0,r=n-1;
while(l<=r)
{
    sum=0;
    ll mid= (a[l]+a[r])/2;
   auto x =upper_bound(a,a+n,mid)-a;
    
    for(int i=x;i<n;i++)
    {
        sum+=a[i]-mid;
    }
if(sum>=m)
{
   ans=sum;
   l=x+1;
}
else if(sum<m)
{
r=x-1;
}
cout<<ans<<endl;
}
}