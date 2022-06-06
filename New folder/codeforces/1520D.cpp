#include<bits/stdc++.h>

using namespace std;
long long int func(long long int it)
{
   long long int ans=0;
    ans=((it)*((it-1)));
 ans=ans/2;
 return ans;
}
int main()

{

long long int t;
cin>>t;
while(t--)
{
    long long int cnt=0;
long long int ans=0;

map<long long int,long long int>m;
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
{
    cin>>a[i];
    m[a[i]-i]++;
}
for(auto it:m)
{
    // cout<<it.second<<"\n";
    if(it.second!=1)
    {
        ans+=func(it.second);
    }
}
// int mod=1000000007;
// int b[cnt+1];
// b[0]=1;
// for(int j=1;j<=cnt;j++)
// {
//      b[j]=((j%mod)*(b[j-1]%mod))%mod;
// }

// ans=b[cnt]
 
cout<<ans<<"\n";
}
}