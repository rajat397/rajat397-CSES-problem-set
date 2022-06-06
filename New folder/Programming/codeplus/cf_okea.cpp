#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void solve(){
    int e=2,o=1,n,k;
    cin>>n>>k;
    int x = int(ceil((n*k)/2));

    if(((n*k)%2==0)&&((n*k)%(2*k)==0)||((n*k)%2==1)&&(x%k==0))
    {
        cout<<"yes"<<"\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
               if(e<=n*k)
               {
               cout<<e<<" ";
               e+=2;
               }
               else
               {
                   cout<<o<<" ";
                   o+=2;
               }
            }
            cout<<"\n";
        }
        return;
    }
    
    cout<<"no"<<"\n";
    return;
        
    
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