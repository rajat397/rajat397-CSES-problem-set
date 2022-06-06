#include<bits/stdc++.h>

using namespace std;

int main()

{
int n;
cin>>n;
map<string,int>name;
while(n--)
{
    string s;
    cin>>s;
    if(name.count(s)==0)
    {
      name[s]=1;
      cout<<"OK"<<"\n";

    }
    else
    {
       int x=name[s];
        name[s]++;
       s+=to_string(x);
      
       cout<<s<<"\n";

    }

}

}