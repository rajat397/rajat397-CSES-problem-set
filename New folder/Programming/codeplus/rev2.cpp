#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

void pattern(int n)
{
    if(n==1)
    cout<<"*"<<endl;
    else 
    {
        pattern(n-1);
        for(int i=0;i<n;i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main()
{

fastio
ll n;
cin>>n;
pattern(n);

}