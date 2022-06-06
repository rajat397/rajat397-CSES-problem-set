#include<bits/stdc++.h>

using namespace std;

int main()

{

int a[6][6]={0};
for(int i=1;i<6;i++)
{
    for(int j=1;j<6;j++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int ans=fabs(i-3)+fabs(j-3);
            cout<<ans<<"\n";
        }
    }
}
}