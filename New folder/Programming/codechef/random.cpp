#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;
cin>>n;
int a[n];
set<int>ans;
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
for(int i=1;i<=(pow(2,n));i++)
{   int sum=0;

    for(int j=0;j<n;j++)
    {
        int x=1<<j;
        if((i&x)!=0)
        {
        sum+=a[j+1];
        }
       
    }
    // cout<<i<<" "<<sum<<"\n";
     ans.insert(sum);
}


for(auto a:ans)
{
    if(a!=0)
    cout<<a<<" ";
}
}