#include<bits/stdc++.h>

using namespace std;

int main()

{
 int n,max=0;
 cin>>n;
 vector<int>a(n);
 map<int,int>m;
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
    m[a[i]]++;

 }
 for(pair<int,int>p:m)
 {
     if(max<p.second)
     {
         max=p.second;
     }
 }

 cout<<max<<"\n";

}