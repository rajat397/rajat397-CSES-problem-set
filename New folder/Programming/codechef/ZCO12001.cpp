#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int c1=0,m1=0,i1=0;
vector<int>l,s;
s.push_back(0);
for(int i=0;i<n;i++)
{
  
    if(c1==0&&i!=0)
    {
        s.push_back(i+1);

        l.push_back(i-s.back()+1);
    }
      if(a[i]==1)
      {
          c1++;
          if(m1<c1)
          {
              m1=c1;
              i1=i;
          }
      }
      else{
          c1--;
      }
}
int maxm=0;
for(int i=0;i<l.size();i++)
{
    if(l[maxm]<l[i])
    {
       maxm=i;
    }
}

cout<<m1<<" "<<i1<<" "<<l[maxm]<<" "<<s[maxm]<<endl;


}