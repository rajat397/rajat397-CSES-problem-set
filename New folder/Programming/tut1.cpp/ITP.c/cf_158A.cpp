#include<bits/stdc++.h>

using namespace std;

int main()

{

int n,k;
cin>>n>>k;
int a[n+1]={0};
for(int i=1;i<=n;i++)
{
    cin>>a[i];

}
int i;
for( i=1;((a[i]>=a[k])&&(a[i]>0)&&(i<=n));i++);
cout<<i-1<<"\n";
}