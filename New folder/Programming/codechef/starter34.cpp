#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

int main()
{

fastio
ll t;
cin>>t;
while(t--)
{
    ll n,c1=0,c0=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
       if(s[i]='0')c0++;
       else c1++;
    }
    ll d=0;
    if(c1>c0)
    {
        d=c1-c0;
    }
    else if(c0>c1)
    {

        d=c0-c1;
    }
    if(d%2==1)
    {
        cout<<"NO"<<endl;
    }
    else if(d==0)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++)
        {
            if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0'))
            cout<<i<<" "<<i+1<<endl;
            break;
        }
    }
    else if(d%2==0)
    {
        ll c=1,p=0,flag=0;
        if(c1>c0)
        {
        for(int i=0;i<n-1;i++)
        {
           
               
                if(s[i-1]=='0'&&s[i]=='1')p=i;
                if(s[i]=='1'&&s[i+1]=='1')c++;
                 if(c==d)
                {
                    flag=1;
                    break;
                }
                if(s[i]=='1'&&s[i+1]=='0')c=1;
            
        }

        }
        else{
              for(int i=0;i<n-1;i++)
              {
               if(s[i-1]=='1'&&s[i]=='0')p=i;
                if(s[i]=='0'&&s[i+1]=='0')c++;
                 if(c==d)
                {
                    flag=1;
                    break;
                }
                if(s[i]=='0'&&s[i+1]=='1')c=1;
              }
            
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            cout<<p<<" "<<p+d/2-1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

   
     
}
}