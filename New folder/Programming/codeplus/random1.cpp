#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int sum(vector<int>&A,int i , int j)
{
    int sum=0;
    for(int a=i;a<=j;a++)
    {
        sum+=A[a];
    }
    return sum;
}
int main()

{
int n,k,i;
cin>>n;
vector<int>A(n);
int max=0;
for( i=0;i<n;i++)
{
    cin>>A[i];
}
for(i=0;i<n;i++)
{
    k=(-1+(int(sqrt(1+8*(n-1+i+1)))))/2;
    cout<<k<<endl;
    if(max<sum(A,i,i+((k*(k+1)/2)-1)))
    {
      max=sum(A,i,(i+((k*(k+1)/2)-1)));
      cout<<sum(A,i,(i+((k*(k+1)/2)-1)))<<endl;
      cout<<i<<" "<<(i+((k*(k+1)/2)-1))<<endl;
     
      
    }
}

cout<<max<<"\n";

}