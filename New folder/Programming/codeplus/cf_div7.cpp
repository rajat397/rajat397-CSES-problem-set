#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int x=n;
    int q= n/7;
    if((7*q/10)==(n/10))
    {
        cout<<7*q<<"\n";

    }
    else{
        cout<<7*(q+1)<<"\n";
    }
}
}