
#include<bits/stdc++.h>
 
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
 
#define int long long int
 
#define m 1000000007
 
vector<int>dp(10000000,-1);

int solve(int n)
{
   if(n==0)return 1;
   if(n<0)return 0;
    
   if(dp[6+n]!=-1)
   {
     //  cout<<dp[6+n]%m<<endl;
       return dp[6+n]%m;
   }   
 
    dp[6+n]=((((((((((solve(n-1)+solve(n-2))%m)+solve(n-3))%m)+solve(n-4))%m)+solve(n-5))%m)+solve(n-6))%m);
  
    return dp[6+n]%m;
    
}
signed main()
{
 
fastio
int n;
cin>>n;

cout<<solve(n)<<endl;

 
}