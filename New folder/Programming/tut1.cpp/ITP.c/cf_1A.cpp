#include<bits/stdc++.h>

using namespace std;

int main()

{

double n,m,a;
cin>>n>>m>>a;

long long ans = (long long)(ceil(n/a))*(long long)(ceil(m/a));
// cout<<n/a<<endl;
// cout<<ceil(n/a)<<"\n";
// cout<<ceil(m/a)<<"\n";

cout<<ans<<"\n";
}