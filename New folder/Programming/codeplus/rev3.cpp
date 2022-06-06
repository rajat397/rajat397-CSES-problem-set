#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define ll long long int

bool checkPalin(string s,int l,int r)
{
    if(l>r)
    {
        return 1;
    }
    if(s[l]!=s[r])
    {
        return 0;
    }
    return  checkPalin(s,l+1,r-1);
   
    
}
int main()
{

fastio

string s;
cin>>s;
int l=0,r=s.size()-1;
cout<<checkPalin(s,l,r);

}