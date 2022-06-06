#include<bits/stdc++.h>

using namespace std;

int main()

{

int m,n;
cin>>m>>n;
int small=min(m,n);
int big=max(m,n);
if(big&1)
{
    int ans=(small*(big/2)+small/2);
    cout<<ans<<"\n";

}
else
{
    int ans=small*(big/2);
    cout<<ans<<"\n";

    
}
}