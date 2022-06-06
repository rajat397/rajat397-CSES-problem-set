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
    if(n&1)
    {
        cout<<"NO"<<endl;

    }
    else
    {
        int x=n/2;
        int y=0;
        if(n%4==0)
        {
            y=n/4;
        }
        int b=sqrt(y);
        int a=sqrt(x);
        if(a*a==x)
        {
            cout<<"YES"<<endl;
        }
        else if(y!=0&&b*b==y){
            cout<<"YES"<<endl;

        }
        else
        {
              cout<<"NO"<<endl;
        }
    }
}
}