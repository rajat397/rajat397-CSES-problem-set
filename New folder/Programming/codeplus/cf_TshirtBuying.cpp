#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;
cin>>n;
int a[n],b[n],p[n];
map<int,pair<int,int>>m;
for(int i=0;i<n;i++)
{
    cin>>p[i];
}
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    cin>>b[i];
}
for(int i=0;i<n;i++)
{
    m[p[i]]={a[i],b[i]};
}

}