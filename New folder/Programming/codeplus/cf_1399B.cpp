#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n],b[n],c[n],d[n],sum=0,min1=INT_MAX,min2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(min1>a[i])
        {
            min1=a[i];
        }
    }
     for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(min2>b[i])
        {
            min2=b[i];
        }
    }
     for(int i=0;i<n;i++)
    {
           c[i]=a[i]-min1;     
    }
     for(int i=0;i<n;i++)
    {
       d[i]=b[i]-min2;
    }
    for(int i=0;i<n;i++)
    {
        sum+=max(c[i],d[i]);
    }
    cout<<sum<<"\n";
}
}