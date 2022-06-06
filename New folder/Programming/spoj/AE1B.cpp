#include<bits/stdc++.h>

using namespace std;

int main()

{

int n,k,s;
cin>>n>>k>>s;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
int sum=0,cnt=0;
for(int i=n-1;i>=0;i--)
{
    if(sum<(k*s))
    {
        sum+=a[i];
        cnt++;
    }
}
cout<<cnt<<"\n";
}