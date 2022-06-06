#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

int main()
{

fastio
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll ans=0;
    map<string,ll>m;
    while(n--)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        for(auto j=it++;j!=m.end();j++)
        {
            // cout<<(*it).first;
            if(((*it).first[0]==(*j).first[0])&&((*it).first[1]!=(*j).first[1])||(((*it).first[0]!=(*j).first[0])&&((*it).first[1]==(*j).first[1])))
            {
                ans+=((*it).second)*((*j).second);
            }
        }
    }

    cout<<ans<<endl;
}
}