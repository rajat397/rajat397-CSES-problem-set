#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

int main()
{

fastio
int ans=0;
string s1,s2;
cin>>s1>>s2;
map<char,int>m,n;
for(int i=0;i<s1.size();i++)
{
    m[s1[i]]++;
}
for(int i=0;i<s2.size();i++)
{
    m[s2[i]]++;
}

for(auto it:m)
{

    ans+=abs(it.second-(n[it.first]));
}
cout<<ans<<endl;
}