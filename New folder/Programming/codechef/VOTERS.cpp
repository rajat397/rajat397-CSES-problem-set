#include<bits/stdc++.h>

using namespace std;

int main()

{

int n1,n2,n3;
cin>>n1>>n2>>n3;
vector<int>ans;
map<int,int>m;
int i;
for(i=0;i<n1;i++)
{
    int x;cin>>x;
    m[x]++;
}
for(i=0;i<n2;i++)
{
    int x;cin>>x;
    m[x]++;
}
for(i=0;i<n3;i++)
{
    int x;cin>>x;
    m[x]++;
}
for(auto it:m)
{
    if(it.second>=2)
    {
        ans.push_back(it.first);
        
    }
}

cout<<ans.size()<<endl;
for(auto i:ans)
{
    cout<<i<<endl;
}

}