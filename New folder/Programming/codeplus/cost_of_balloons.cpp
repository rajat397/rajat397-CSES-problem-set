#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int cg,cp,s0=0,s1=0;
    cin>>cg>>cp;
    int n;
    cin>>n;
    int A[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>A[i][0];
        if(A[i][0]==1) s0++;

        cin>>A[i][1];
        if(A[i][1]==1) s1++;
    }
    cout<<((max(s0,s1)*min(cg,cp))+(min(s0,s1)*max(cg,cp)))<<"\n";
    

}
int main()

{
int t;
cin>>t;
while(t--)
{
    solve();
}

}