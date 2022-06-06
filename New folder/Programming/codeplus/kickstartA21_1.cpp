#include<bits/stdc++.h>

using namespace std;

int main()

{
int t;
cin>>t;
while(t--)
{
   int n,k,cnt=0;
   cin>>n>>k;
   string s;
   cin>>s;
   for(int i=0;i<n/2;i++)
   {
      if(s[i]!=s[n-1-i])
      {
          cnt++;
      }

   }
   cout<<"case #"<<t<<":"<<k-cnt<<"\n";
}

}