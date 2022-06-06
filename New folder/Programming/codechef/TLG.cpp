#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;
cin>>n;
int a[n],b[n];
vector<pair<int,int>>v;
int i;
for(i=0;i<n;i++)
{
    int x,y;
    cin>>x>>y;
    if(i==0)
    {
        a[i]=x;
        b[i]=y;

    }
    else
    {
        a[i]=a[i-1]+x;
        b[i]=b[i-1]+y;
    }


}
for(int i=0;i<n;i++)
{
    if(a[i]-b[i]>=0)
    {
        v.push_back({a[i]-b[i],1});
    }
    else
    {
        v.push_back({b[i]-a[i],2});

    }
}
sort(v.begin(),v.end());
cout<<v.back().second<<" "<<v.back().first;
}