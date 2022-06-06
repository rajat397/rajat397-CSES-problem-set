#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
int n,x,sum=0;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
int i;
for( i=0;i<n;i++)
{
   if(sum>x)
   {
       break;
   } 
   else{
       if((sum+a[i])<=x)
       {
           sum+=a[i];
       }
       else if((sum+a[i]/2)<=x){
           sum+=a[i]/2;

       }
       else{
           break;
       }
   }
}
cout<<i<<"\n";
}
}