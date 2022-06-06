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
    if(name[s]==0)
    {
      cout<<"OK"<<"\n";

    }

    else
    {
        cout<<s<<"\n"<<name[s];
       
      
     

    }
        name[s]++;


}

}