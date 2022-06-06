#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void solve()
{
    long long int k=0,x,m;
    cin>>x>>m;
    if(x>pow(2,(m-1)))
    {
        cout<<0<<"\n";
        return;
    }
    int num=x;
    while(x>=2)
    {
        k++;
        x=x/2;
    }
    
    if(num>int(pow(2,k)))
    {
    cout<<(m-k-1)<<"\n";
    }
    else{
        
     cout<<m-k<<"\n";
    }
    return;
}

int main()

{
int t;
cin>>t;
while(t--)
{
   solve();
}
}