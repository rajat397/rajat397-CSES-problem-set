#include<bits/stdc++.h>

using namespace std;

int main()

{
int t;
cin>>t;
while(t--)
{
    int n,k=0,cnt=0;
    int a[n][n],b[n*n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            b[k]=a[i][j];
            k++;
        }
    }
    for(int i=0;i<n*n;i++)
    {
        for(int j=i+1;j<n*n;j++)
        {
            if(b[i]>b[j])
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
    
}

}