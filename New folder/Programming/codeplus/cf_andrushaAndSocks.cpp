#include<bits/stdc++.h>

using namespace std;

int main()

{
int n;
cin>>n;
int a[2*n],max=0;
set<int>s;
for(int i=0;i<2*n;i++)
{
    cin>>a[i];
    if(s.find(a[i])==s.end())
    {
        s.insert(a[i]);
    }
    else{
        if(max<s.size())
        {
            max=s.size();
        }
        s.erase(a[i]);

    }

}
cout<<max<<"\n";


}