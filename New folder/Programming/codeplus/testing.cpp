#include<bits/stdc++.h>

using namespace std;
void solve(vector<int>&cnt,int j)
{
    if(j==cnt.size()){
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
        solve(cnt,j+1);
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
    vector<int>v(2*n);
    for( i=0;i<2*n;i++)
    {
        cin>>v[i];
    }
    
    int max=*(max_element(v.begin(),v.end()));
    vector<int>cnt(max+1);
    
    for(i=0;i<=max;i++)
    {
        cnt[i]=count(v.begin(),v.end(),i);

    }
    
    
    solve(cnt,0);

}

}