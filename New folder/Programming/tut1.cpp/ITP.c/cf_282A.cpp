#include<bits/stdc++.h>

using namespace std;

int main()

{

int n,x=0;
cin>>n;
while(n--)
{
    string s;
    cin>>s;
    // cout<<s[1]<<"\n";
    
    if(s[1]=='+') x++;
    else x--;
}
cout<<x<<"\n";
}