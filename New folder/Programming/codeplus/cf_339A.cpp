#include<bits/stdc++.h>

using namespace std;

int main()

{

string s,a;
vector<int>ans;
cin>>s;
for(int i=0;i<s.size();i++)
{
    if((i&1)==0)
    {
        a+=s[i];
    }

}

sort(a.begin(),a.end());


string str;
for(int i=0;i<a.size();i++)
{
    str=str+a[i]+'+';
}
str.pop_back();
cout<<str<<"\n";
}