#include<bits/stdc++.h>

using namespace std;

int rev(int a)
{
    int r=0;
    while(a)
    {
       
            r=r*10+(a%10);
            a=a/10;
     
    }
    return r;
}

int main()

{

int n;
cin>>n;
while(n--)
{
    int a,b;
    cin>>a>>b;
    int ans=rev(a)+rev(b);
    cout<<rev(ans)<<"\n";
}
}