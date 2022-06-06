#include<bits/stdc++.h>

using namespace std;

int main()

{

string s1,s2;
cin>>s1>>s2;
for(int i=0;i<s1.size();i++)
{
    if(s1[i]>=65&&s1[i]<=90)
    s1[i]+=32;
}
for(int i=0;i<s2.size();i++)
{
    if(s2[i]>=65&&s2[i]<=90)
    s2[i]+=32;
}
int i=0,j=0;
while(i<s1.size()&&j<s2.size())
{
  if(s1[i]==s2[j])
  {
      i++;
      j++;
  }
  else if(s1[i]>s2[j])
  {
      cout<<1<<"\n";
      exit(0);
  }
  else{
      cout<<-1<<"\n";
      exit(0);
  }
}
if(i<s1.size())
{
    cout<<1<<"\n";
}
else if(j<s2.size())
{
    cout<<-1<<"\n";
}
else{
    cout<<0<<"\n";
}

}