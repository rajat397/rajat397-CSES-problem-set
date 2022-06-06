#include<bits/stdc++.h>

using namespace std;

int main()

{

long long n,m,a;
cin>>n>>m>>a;

long long ans = int(ceil(n/a))*int(ceil(m/a));
cout<<ans<<"\n";
}