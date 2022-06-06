#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    string n;
    cin>>n;
    long long s=0;
    for(int i=0;i<n.size();i++)
    {
       s=s+(n[i])-48;
    //    cout<<s<<endl;
    }
   
    cout<<s<<"\n";
}
}