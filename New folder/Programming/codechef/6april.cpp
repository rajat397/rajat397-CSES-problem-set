#include <bits/stdc++.h>
using namespace std;

int main() {
int t;cin>>t;
while(t--)
{
    int n,mex=n,ans=0;cin>>n;
    int a[n],b[n]={0};
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        a[i]=x;
        if(x<n)
        b[x]++;
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]==0)
        {
            mex=i;
            break;
        }
    }
    sort(a,a+n);
    set<int>s;
    for(int i=0;i<n;i++)
    {
         s.insert(a[i]);
    }
    vector<int>v;
    for(auto i:s)
    {
         v.push_back(i);
    }
    int conseq=1;
    if(mex==0)
    {
        ans=v[0]-1;
    }
    else if(mex==1)ans=-1;
    else
    {

         if(v[n-1]==0)ans=-1;
        
        else if(v[n-1]==(n-1))ans=0;
    
        else{

        for(int i=0;i<n-1;i++)
        {
           
            if(v[i+1]-v[i]==1)conseq++;
            else{
                if(conseq>=mex-1)
                ans++;
                conseq=1;
            }
        }
        if(conseq!=1&&conseq>=mex-1)ans++;
          
       
        }
       
    }

    
    cout<<ans-1<<endl;
}
    return 0;
}
