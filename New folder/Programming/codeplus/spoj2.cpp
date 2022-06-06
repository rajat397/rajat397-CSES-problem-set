#include<bits/stdc++.h>
#include<math.h>
using namespace std;

bool checkPrime(int a)
{    if(a==1) return false;
    for(int i=2;i<sqrt(a);i++)
    {
        if(a%i==0){
            return false;
            }

    }
    return true;
}
void solve()
{
    int a,b;
    cin>>a,b;
    for(int i=a;i<b;i++)
    {
        if(checkPrime(i))
        {
            cout<<i<<"\n";
        }
    }
}
int main()

{
int t;
cin>>t;
while(t--)
{
    solve();
    cout<<"\n";
}
}