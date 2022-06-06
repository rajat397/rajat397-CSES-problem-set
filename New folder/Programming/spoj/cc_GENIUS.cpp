#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    float n,x;
    cin>>n>>x;
    int a,b,c;
    a=ceil(x/3);
    b=(a*3)-(x);
    c=n-(a+b);
    if(b>n-a)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
        cout<<a<<" "<<b<<" "<<c;

    }

}
}