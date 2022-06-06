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
     int z=0,o=0;
     for(int i=0;i<s.size();i++)
     {
          if(s[i]='0')
          {
              z++;
          }
          else{
              o++;
          }
     }
     if(z!=o)
     {
        cout<<min(z,o)<<"\n";
     }
     else
     {
         cout<<z-1<<"\n";
     }
 }
}