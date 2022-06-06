#include<bits/stdc++.h>

using namespace std;

int main()

{

int n,h;
cin>>n>>h;
int a[n];
vector<int>cmd;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
while(true)
{
    int x;
    cin>>x;
    if(x==0)
    {
        break;
    }
    else cmd.push_back(x);
}
int c=0,x=0;
    for(int i=0;i<cmd.size();i++)
    {
        if(cmd[i]==1&&c!=0)
        {
            
            c--;
        }
        else if(cmd[i]==2&&c!=n-1)
        {
            c++;
        }
        else if(cmd[i]==3&&a[c]!=0&&x==0)
        {
            a[c]--;
            x=1;
        }
        else if(cmd[i]==4&&a[c]!=h&&x==1)
        {
            a[c]++;
            x=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}