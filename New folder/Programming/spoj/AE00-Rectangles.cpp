#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;
cin>>n;
int cnt=0;
for(int i=1;i*i<=n;i++)
{
   for(int j=i*i;j<=n;j+=i)
   {
       cnt++;
   }
}
cout<<cnt<<"\n";
}