#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    int n;
    string a,s;
    cin>>n>>a;
    int c1=0,c0=0;
    int p1,p0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
           c1++;
           if(c1==1)
           {
               p1=i;
               c0=0;
           }
        }
        else{
            c0++;
            p0=i;
        }
        if(c1==c0)
        {
              for(int j=0;j<p1;j++)
              {
                  s+=a[j];
              }
              for(int j=p0;j>=p1;j--)
              {
                  s+=a[j];
              }
              for(int j=p0;j<n;j++)
              {
                  s+=a[j];
              }
              break;
        }
    }
    cout<<s<<"\n";
}
}