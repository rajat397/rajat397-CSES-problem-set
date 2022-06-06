#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

int main()
{

fastio
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
//    cout<<n<<endl;
//    cout<<"there"<<endl;
   string s;
   cin>>s;
//    cout<<s<<endl;
   ll w=0,b=0,r=0,flag=0;
   for(ll i=0;i<n;i++)
   {
    //    cout<<"entered";
        if(s[i]!='W')
        {
            if(s[i]=='B')
            {
                // if(r!=0)r=0;
                b++;
            }
            else 
            {
                // if(b!=0)b=0;
                r++;
            }
        }
        else 
        {
            if((b==0&&r!=0)||(b!=0&&r==0))
            {
                flag=1;
                break;
            }
            r=0;b=0;
        }
   }
    // cout<<b<<" "<<r<<endl;
    if((b==0&&r!=0)||(b!=0&&r==0))
    {
        cout<<"NO"<<endl;
    }
    else if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        
    }
   
}
}