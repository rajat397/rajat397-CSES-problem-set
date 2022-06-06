#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
vector<int>ans;
cin>>t;
int i=1;
while(i<=1000)
{
  if(i%3==0||i%10==3)
  {
      continue;
  }
  else{
      ans.push_back(i);
      i++;
  }
}
while(t--)
{
    int k;
    cout<<ans[k]<<"\n";

}
}