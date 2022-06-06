#include<bits/stdc++.h>

using namespace std;

void solve(vector<int>&a)
{
    vector<int>v;
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]>=a[i+1])
        {
            v.push_back(a[i]);
        }
    }
    v.push_back(a[a.size()-1]);
    if(v.size()==a.size())
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
    else
    {
        solve(v);
    }
}

int main()

{

int n;
cin>>n;
vector<int>a;
for(int i=0;i<n;i++)
{
    cin>>a[i];

}
solve(a);


}