#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    int n, a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int c0=0,c1=0,l0=0,l1=0;
    for(int i=0;i<n;i++)
    {
        if(l0!=0&&s[i]=='1')
        {
            c0++;
            l0=0;
            l1++;
        }
        else if(l1!=0&&s[i]=='0')
        {
            c1++;
            l1=0;
            l0++;
        }
        else if(l0==0&&l1==0)
        {
            if(s[i]=='0')
            {
                l0++;
            }
            else l1++;
        }
    }
    if(l0!=0)
    {
        c0++;
    }
    else if(l1!=0)
    {
        c1++;
    }

    if(b>=0)
    {
        cout<<n*(a+b)<<endl;
    }
    else if(b<0)
    {
        int x=min(c0,c1);
        cout<<(n*a+(x+1)*b)<<endl;
    }
}
}