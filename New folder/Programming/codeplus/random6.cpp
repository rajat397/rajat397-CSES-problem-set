#include<bits/stdc++.h>

using namespace std;

int main()

{

map<string,int>m;
m["ram"]++;
m["rajat"]++;
auto it=m.end();
cout<<(*it).first;
cout<<(*it).second;
// for( it=m.begin();it!=m.end();it++)
// {
//    cout<<(*it).first;
//  cout<<(*(it)).second;
  
// }

// for(pair<string,int>p:m)
// {
//     cout<<p.first<<"\n";
//     cout<<p.second<<"\n";

// }
}