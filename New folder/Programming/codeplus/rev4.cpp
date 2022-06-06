#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

int ways(int n)
{    
     if(n==1)
     {
         return 0;
     }
     else if(n==2)
     {
        return 1;
      
     }
     else if(n==3)
     {
         return 2;
     }
     else
     {
         return (ways(n-1)+ ways(n-2)+3);
     }

}

int main()
{

fastio
int n;
cin>>n;
cout<<n;
cout<<ways(n);
}