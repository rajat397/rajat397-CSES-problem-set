#include<bits/stdc++.h>

using namespace std;
#define lli long long int
int main()

{
lli n;
cin>>n;
lli A[n];
cin>>A[0];
lli ans =0;
for(lli i=1;i<n;i++)
{
    cin>>A[i];
    if(A[i]<A[i-1])
    {
        ans+=(A[i-1]-A[i]);
        A[i]=A[i-1];
    }
}
cout<<ans;
}