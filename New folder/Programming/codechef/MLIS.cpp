#include<bits/stdc++.h>

using namespace std;

int main()

{

 long long int t;
 cin>>t;
 while(t--)
 {
     long long int n;
     cin>>n;
     long long int a[n];
     for(long long int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     long long int m=0;
     vector<long long int>ans;
     for(long long int i=0;i<n;i++)
     {
         if(a[i]<a[i+1])
         { 
            
             m++;
            
         }
         else if(a[i]==a[i+1])
         {
            ans.push_back(0);
         }
         else 
         {
             if(m>0)
             ans.push_back(m);
             m=0;
         }
         
     }
     ans.push_back(m);
     long long int maxi=INT_MIN;
     for(long long int i=0;i<ans.size()-1;i++)
     {
         if(maxi<(ans[i]+ans[i+1]))
         {
             maxi=ans[i]+ans[i+1];
         }
     }
     maxi=max(maxi,ans.back());
     cout<<maxi<<"\n";
 }
}