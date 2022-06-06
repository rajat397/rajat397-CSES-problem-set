#include<bits/stdc++.h>

using namespace std;

int main()

{
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int x1,y1;
    cin>>x1>>y1;
    int x2,y2;
    cin>>x2>>y2;
    int a[n+1][m+1];
     for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            a[i][j]=0;
        }
        
    }
   
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(i==x2&&j==y2)
            {
                a[i][j]=2;
            }
            else if((abs(i-x1)+abs(j-y1))%2==0)
            {
                a[i][j]=1;
            }
            else
            a[i][j]=2;
        }
    }
    if((abs(x1-x2)+abs(y1-y2))%2!=0)
    {
        for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    }
    else{
     for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(i==x1&&j==y1)
            {
                continue;
            }
            else if(i==x2&&j==y2)
            {
                continue;
            }
            // else if(((abs(i-x1)+abs(j-y1))%2==0)&&a[i][j]==1)
            // {
            //     a[i][j]=3;
            // }
            else if(((abs(i-x1)+abs(j-y1))%2==1)&&a[i][j]==2)
            a[i][j]=3;
        }
    }
     for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    }
}

}