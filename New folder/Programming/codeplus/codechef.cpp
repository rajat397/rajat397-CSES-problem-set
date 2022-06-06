#include<bits/stdc++.h>

using namespace std;

int main()

{
int t;
cin>>t;

while(t--)
{
    int n,k;
    cin>>n>>k;
    
    vector<int>a(n+1,0);
    
 
    int i;
    if(k==0)
    {
        cout<<-1<<"\n";
    }
    else{
        for( i=1;i<=k;i++)
        {
            a[i]=i;
        }
        for(int j=i+1;j<n;j++)
        {
            a[j]=j;
        }
        a.push_back(i);
        for(int k=1;k<=n;k++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
  
}
}