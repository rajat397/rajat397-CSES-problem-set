#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;
cin>>n;
int a[n],n1=0,n2=0,n3=0,n4=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]==1)n1++;
    else if(a[i]==2)n2++;
    else if(a[i]==3)n3++;
    else if(a[i]==4)n4++;

}
if(n3>n1)
{
    cout<<(ceil(n2/2.0)+n3+n4)<<"\n";
}
else if(n3+n2>n1)
{
    cout<<(n4+n3+ceil((n1-n3)/2.0)+ceil((n2-ceil((n1-n3)/2.0))/2.0))<<"\n";
}
else
{
    cout<<ceil((n1-n3-2*n2)/4.0)+n2+n3+n4<<"\n";
}
}