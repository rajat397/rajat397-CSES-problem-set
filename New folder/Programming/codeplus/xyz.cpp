#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    set<int>a,b;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a.insert(x);
        b.insert(y);
    }
    cout<<a.size()+b.size()<<"\n";
}
}