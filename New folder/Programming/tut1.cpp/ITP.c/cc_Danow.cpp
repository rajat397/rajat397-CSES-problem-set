#include<bits/stdc++.h>

using namespace std;

int main()

{

int n,q;
cin>>n>>q;
int a[n+1]={0};
int b[n+1]={0};
long long ans[n+1]={0};
for(int i=1;i<n+1;i++)
{
    cin>>a[i];
}
for(int i=1;i<n+1;i++)
{
    cin>>b[i];

}
for(int i=1;i<n+1;i++)
{
    ans[i]=ans[i-1]+a[i]*b[i];
}
while(q--)
{
    int l,r;
    cin>>l>>r;
    cout<<ans[r]-ans[l-1]<<"\n";
}
}