#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;
cin>>n;
int cnt=0;
while(n--)
{
    int x=0;
    int a,b,c;
    cin>>a>>b>>c;
    if(a&1)
    {
        x++;
    }
     if(b&1)
    {
        x++;
    } 
    if(c&1)
    {
        x++;
    }
    if(x>=2) cnt++;
}
cout<<cnt<<"\n";
}