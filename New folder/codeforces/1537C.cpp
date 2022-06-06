#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    sort(h,h+n);
    int a,b,min=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(min>(abs(h[i]-h[i-1]))){
            min=abs(h[i]-h[i-1]);
            a=i-1;
            b=i;
        }
    }
    cout<<h[a]<<" ";
    for(int i=b+1;i<n;i++)
    {
        cout<<h[i]<<" ";
    }
    for(int i=0;i<a;i++)
    {
       cout<<h[i]<<" ";
    }
    cout<<h[b]<<" ";
    cout<<"\n";

}
}