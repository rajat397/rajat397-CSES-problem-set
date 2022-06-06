#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    string a,b;
    int flag=0,cnt=0;
    cin>>a;
    cin>>b;
    map<char,int>m1,m2;
    for(int i=0;i<a.size();i++)
    {
        m1[a[i]]++;
    }
    for(int i=0;i<b.size();i++)
    {
        m2[b[i]]++;
    }
    for(char i='a';i<'z';i++)
    {
        if((m2[i]-m1[i])<0)
        {
            flag=1;
            break;
        }
        else
        {
            cnt=cnt+(m2[i]-m1[i]);
        }
    }
    if(flag==1)
    {
        cout<<"case #t:"<<" "<<"IMPOSSIBLE"<<"\n";
        break;
    }
    for(char i='A';i<'Z';i++)
    {
        if((m2[i]-m1[i])<0)
        {
            flag=1;
            break;
        }
        else
        {
            cnt=cnt+(m2[i]-m1[i]);
        }
    }
    if(flag==1)
    {
        cout<<"case #t:"<<" "<<"IMPOSSIBLE"<<"\n";
        break;
    }
    else
    {
      cout<<"case #t:"<<" "<<cnt<<"\n";   
    }
}
}