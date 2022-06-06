#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int n=s.size(),len=0,max=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[0]||s[i]==s[n-1])
        {  
            if(max<=len)
            {
                max=len;
            }
            len=0;
        }
        else{
            len++;
        }
    }
    if(max==0)
    {
        cout<<-1<<"\n";
    }
    else
    cout<<max<<"\n";
}
}