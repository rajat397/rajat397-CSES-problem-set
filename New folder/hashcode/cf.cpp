#include<bits/stdc++.h>

using namespace std;

int main()

{

 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("outputB.txt","w",stdout);
    #endif
    
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<0<<"\n";
    }
    if(n==2)
    {
        
        cout<<0<<" "<<1<<"\n";
    }
    
    else if(n%2==0)
    {
        int i;
        // cout<<n-2<<"\n";
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