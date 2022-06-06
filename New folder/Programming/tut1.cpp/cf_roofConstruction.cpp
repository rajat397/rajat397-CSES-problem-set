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
    if(n&1==0)
    {
        int i;
        for( i=1;i<n-2;i++)
        {
            cout<<i<<" ";
        }
        cout<<0<<" "<<i<<" "<<i+1<<"\n";
    }
    else{
         int i;
        for( i=1;i<n-1;i++)
        {
            cout<<i<<" ";
        }
        cout<<0<<" "<<i<<"\n";
    }
}
}