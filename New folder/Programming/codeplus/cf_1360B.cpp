#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    int n,min=INT_MAX;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];

    }
   
    sort(s,s+n);
    for(int i=0;i<n-1;i++)
    {
       if(min>fabs(s[i]-s[i+1]))
       min=abs(s[i]-s[i+1]);
    }
   
    cout<<min<<"\n";
    
}
}