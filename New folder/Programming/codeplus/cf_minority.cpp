#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int a[s.size()]={0};
    int b[s.size()]={0};

    if(s[0]=='0')
    {
        a[0]++;
    }
    else
    {
        b[0]++;
    }

    for(int i=1;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            a[i]=a[i-1]+1;
            b[i]=b[i-1];
        }
        else{
            b[i]=b[i-1]+1;
            a[i]=a[i-1];
        }
    }
    int max=0,pos;
    for(int i=2;i<s.size();i++)
    
    {
        if(max<=(fabs(a[i]-b[i])))
        {
           max=fabs(a[i]-b[i]);
           pos=i;
        }
    }
    if(a[s.size()-1]!=b[s.size()-1])
    {
        cout<<min(a[s.size()-1],b[s.size()-1])<<"\n";
    }
    else
    {
    cout<<min(a[pos],b[pos])<<"\n";
    }
}
}