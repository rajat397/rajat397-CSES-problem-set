#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    int n,ne=0,no=0;
    cin>>n;
    int a[n];
    vector<int>e,o;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            if(ne==0)
            {
                ne++;
            }
            e.push_back(a[i]);
        }
        else{
            no++;
            o.push_back(a[i]);
        }
    }
    if(ne==0&&no%2==0&&no!=0)
    {
        for(auto a:o)
        {
            cout<<a<<" ";
        }
        cout<<"\n";
    }
    else if(ne==0&&no%2!=0)
    {
        cout<<-1<<"\n";
    }
    else if(ne==1&&no%2==0&&no!=0)
    {
         for(auto a:e)
        {
            cout<<a<<" ";
        }
         for(auto a:o)
        {
            cout<<a<<" ";
        }
        cout<<"\n";
    }
     else if(ne==1&&no%2!=0)
     {
         cout<<o[0]<<" ";
          for(auto a:e)
        {
            cout<<a<<" ";
        }
        for(int i=1;i<o.size();i++)
        {
            cout<<o[i]<<" ";
        }
        cout<<"\n";

     }
}
}