#include<bits/stdc++.h>

using namespace std;
void swap(vector<int>&v,int i,int j)
{
    int temp;
    temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
void solve()
{
    int i,n;
    cin>>n;
    vector<int>v(n),a(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        a[i]=v[i];
    }
    if((v[0]>v[1])&&((v[0]+v[1])%2==1))
    {
        swap(v,0,1);
    }
    for(i=1;i<n-1;i++)
    {
        if(((v[i]+v[i+1])%2==1)&&(v[i]>v[i+1])&&(v[i+1]>=v[i-1]))
        {
            swap(v,i,i+1);
        }
    }
    sort(a.begin(),a.end());
    if(v==a)
    {
        cout<<"yes"<<"\n";
    }
    else{
        cout<<"no"<<"\n";
    }

}
    

int main()

{
int t;
cin>>t;
while(t--)
{
    solve();
}

}