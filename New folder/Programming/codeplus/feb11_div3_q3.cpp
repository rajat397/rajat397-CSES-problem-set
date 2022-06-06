#include<bits/stdc++.h>

using namespace std;

int main()

{
int t;
cin>>t;
while(t--)
{
    int i,c0=0,c1=0, n;string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            c0++;
        }
        else if (s[i]=='1')
        {
            c1++;
        }
    }
    if(n%2==0)
    {
        if(c0%2==0)
        {
            cout<<"yes"<<"\n";
        }
        else if((c0%2==1)&&(c0==c1))
        {
            cout<<"yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }
    }
    else
    {
         cout<<"yes"<<"\n";
    }    
    
}

}