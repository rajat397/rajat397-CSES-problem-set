#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()

{
int t;
cin>>t;
while(t--)
{
   int n;
   cin>>n;
   string a, b;
   cin>>a>>b;
   vector<char>s;
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   for(int i=0;i<n;i++)
   {
       s.push_back(a[i]);
       s.push_back(b[n-i-1]);
   }
   for(int i=0;i<2*n;i++){
       cout<<s[i];
   }
   cout<<"\n";
   
}

}