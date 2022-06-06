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
    if(n&1==0)
    {
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
        for(int i=1;i<=n;i++)
        {
             char s[n];
             for(int j=i;j<i+(n-1)/2;j++)
             {
                 if(j>=n)
               int x=((j%(n-1))-1);
               s[j]='1';
             }
             cout<<s<<"\n";

            
        }
    }
}

}