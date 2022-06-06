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
    string s;
    cin>>s;
    int e0=0,e1=0,o0=0,o1=0,ans;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(s[i]=='0') e0++;
            else e1++;

        }
        else{
            if(s[i]=='0') o0++;
            else o1++;
        }
    }
    if(n%2==0)
    {
        int a=min(e0,o1);
        int b=min((n/2-1),min(e1,o0));
        ans=max(a,b)+min(a,b);
        
    }
    else{
        int a=min(e0,o1);
        int b=min(e1,o0);
        ans=max(a,b)+min(a,b);
    }
    cout<<ans<<"\n";
}
}