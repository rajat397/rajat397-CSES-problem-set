#include<bits/stdc++.h>

using namespace std;
void solve()
{
    int i,j,flag=0,n;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n;i++)
    {
        if(v[i]!=i+1)
        {
            flag++;
          break;
        }
    }
    if(flag==0)
    {
      for(i=0;i<n;i++)
      {
          cout<<v[i]<<" ";
      }
      cout<<endl;
      return;
    }
    for(j=0;j<n;j++)
    {
        if(v[j]==i+1)
        {
            break;
        }
    }
    reverse(v.begin()+i,v.begin()+j+1);
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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