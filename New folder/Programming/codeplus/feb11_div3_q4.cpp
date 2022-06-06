#include<bits/stdc++.h>

using namespace std;

int cnt(vector<int>&A,int n, int j)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
       if(A[i]==i+j+1)
       c++;
    }
    return c;
}
int main()

{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
      {
          if(cnt(A,n,i)==0)
          {
              cout<<i<<"\n";
              break;
          }
      }
}
}