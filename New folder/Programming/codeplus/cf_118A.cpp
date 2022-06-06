#include<bits/stdc++.h>

using namespace std;

int main()

{

string s,ans="";
cin>>s;

for(int i=0;i<s.size();i++)
{
    if(s[i]>=65&&s[i]<=90)
    {
        s[i]+=32;
    }
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        ;
    }
    else{
           ans=ans+'.'+s[i];
    }
}
cout<<ans<<"\n";
}