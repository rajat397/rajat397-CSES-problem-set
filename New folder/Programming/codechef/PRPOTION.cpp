#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

int main()
{

fastio
int t;
cin>>t;
while(t--)
{
int R,G,B,M;
cin>>R>>G>>B>>M;
ll r[R],g[G],b[B];
vector<ll>v;
for(int i=0;i<R;i++)
{
    cin>>r[i];
    v.push_back(r[i]);
}
for(int i=0;i<G;i++)
{
    cin>>g[i];
    v.push_back(g[i]);


}
for(int i=0;i<B;i++)
{
    cin>>b[i];
    v.push_back(b[i]);

}

for(int i=0;i<M;i++)
{
    auto a=max_element(v.begin(),v.end());
    *a=*a/2;

}
cout<<*max_element(v.begin(),v.end())<<endl;
}
}