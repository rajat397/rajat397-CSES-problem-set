#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
int sum(vector<lli>&A,int i , int j)
{
    lli sum=0;
    for(lli a=i;a<=j;a++)
    {
        sum+=a;
    }
    return sum;
}
int main()

{
lli n,k,i;
vector<lli>A(n),s;
lli max=0;
for( i=0;i<n;i++)
{
    cin>>A[i];
}
for(i=0;i<n;i++)
{
    k=(-1+(sqrt(1+8*(n-1+i+1))))/2;
    if(max<sum(A,i,i+((k*(k+1)/2)+1)))
    {
      max=sum(A,i,i+((k*(k+1)/2)+1));
    }
}

cout<<max<<"\n";

}