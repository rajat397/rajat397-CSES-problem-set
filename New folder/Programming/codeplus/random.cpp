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
   string s;
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   for(int i=0;i<n;i++)
   {
       s+=(a[i]);
       s+=(b[n-i-1]);
   }
       cout<<s<<"\n";
   
   
}

}