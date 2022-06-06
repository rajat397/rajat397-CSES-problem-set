#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int c3=0,c2=0,c1=0;
    for(auto it:m)
    {
        int b=it.second;
        if(b%4==3)c3++;
        else if(b%4==2)c2++;
        else if(b%4==1)c1++;
    }
    int ans=0;
    if((c2+c3)%2==1)
    {
        ans=1+(c1+c3-1)*3;

    }
    else{
        ans=(c1+c3)*3;
    }
    cout<<ans<<"\n";
}
}