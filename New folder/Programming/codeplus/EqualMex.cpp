#include<bits/stdc++.h>

using namespace std;
void solve(vector<int>&cnt,int max,int j)
{
    if(j==max+1){
        cout<<"yes"<<"\n";
        return;
    }
    else{
    
    if(cnt[j]==0){
        cout<<"yes"<<"\n";
        return;
    }
    else if(cnt[j]==1){
        cout<<"No"<<"\n";
        return;
    }
    else{
        solve(cnt,max,j+1);
    }
    }
}

int main()
{
int t;
cin>>t;
while(t--)
{
    int i, n;
    cin>>n;
    vector<int>v(2*n),cnt(n+1);;
    for( i=0;i<2*n;i++)
    {
        cin>>v[i];
        cnt[v[i]]++;
    }
    int max=*(max_element(v.begin(),v.end()));
    solve(cnt,max,0);

}

}