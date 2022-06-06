#include<bits/stdc++.h>

using namespace std;

// int IsPalin(string s)
// {
//     for(int i=0;i<s.size()/2;i++)
//     {
//         if(s[i]!=s[s.size()-1-i])
//         return 0;
//     }
//     return 1;
// }
int main()

{

int t;
cin>>t; 
while(t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
int c0=0,ea=0,eb=0,rev=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='0')
    {
        c0++;
    }
}
int IsPalin=1;
for(int i=1;c0!=0;i++)
{
if(rev==0&&IsPalin==0)
{
    
        rev=1;

    

}
else if(rev==1&&IsPalin==0)
{
    
    c0--;
    rev=0;
    IsPalin=1;
    if(i&1)ea++;
    else eb++;
}
else if(IsPalin==1)
{
    if((c0%2==1)&&i==1)
    {
        IsPalin=1;
    }
    else{
        IsPalin=0;
    }
    if(rev==1)rev=0;
    c0--;
  
    if(i&1)ea++;
    else eb++;

}
}

if(ea<eb)
{
    cout<<"ALICE"<<endl;
}
else if(eb<ea)
{
    cout<<"BOB"<<endl;
}
else if(ea==eb)
{
    cout<<"DRAW"<<endl;
}
}

}