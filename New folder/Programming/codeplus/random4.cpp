#include<bits/stdc++.h>

using namespace std;

int main()

{
int n, odd=0,even=0;
cin>>n;
int A[n];
string s[n],str;
for(int i=0;i<n;i++)
{
     cin>>A[i];
     s[i]=to_string(A[i]);
}
for(int i=0;i<n/2;i++)
{
    str+=s[i][0];
}
for(int i=n/2;i<n;i++)
{
    str+=s[i][s[i].size()-1];
}
for(int i=0;i<str.size();i++)
{
    if(i&1)
    odd+=stoi(s[i]);
    else{
        even+=stoi(s[i]);
    }
}
int val=fabs(odd-even);
if(val%11==0)
{
cout<<"OUI"<<"\n";
}
else
{
    cout<<"NON"<<"\n";
}
}