#include<bits/stdc++.h>

using namespace std;

int main()

{
int n;
cin>>n;
int a[n];
set<int>s;
for(int i=0;i<n;i++)
{
   cin>>a[i];
  s.insert(a[i]);
}


if(s.size()>=2)
{


auto it=s.begin();
it++;
cout<<*(it)<<"\n";


}
else{
    cout<<"NO"<<"\n";
}
}