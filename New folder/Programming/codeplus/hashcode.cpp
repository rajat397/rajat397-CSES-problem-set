#include<bits/stdc++.h>

using namespace std;

int main()

{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int c;
cin>>c;
int cnt=0;
vector<string>ans;
map<string,int>lke,dlke;
while(c--)
{
int a,b;

cin>>a;
for(int i=0;i<a;i++)
{
    string s;
    cin>>s;
    lke[s]++;
}
cin>>b;
for(int i=0;i<b;i++)
{
    string s;
    cin>>s;
    dlke[s]++;
}
}
for(auto a:lke)
{
    if(lke[a.first]>dlke[a.first])
    {
        cnt++;
        ans.push_back(a.first);
    }
}
cout<<cnt<<" ";
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
}