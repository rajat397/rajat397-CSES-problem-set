#include<bits/stdc++.h>
# define m 1000000007
using namespace std;

int main()

{
int t;
cin>>t;
int fib[100001];
fib[0]=0;
fib[1]=1;
for(int i=0;i<100001;i++)
{
   fib[i]=(fib[i-1]+fib[i-2])%m;
}
while(t--)
{
int n;
cin>>n;
cout<<fib[n]<<"\n";
}

}