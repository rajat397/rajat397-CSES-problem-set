#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()

{
lli n;
cin>>n;
cout<<n<<" ";
while(true)
{
    
    if(n==1)
    {
        break;
    }
    if(n&1==1)
    {
        n=n*3+1;
        cout<<n<<" ";
    }
    else{
        n=n/2;
        cout<<n<<" ";
    }
}

}