#include<bits/stdc++.h>

using namespace std;

int main()

{
string s;
cin>>s;
int len=1,max=0;
for(int i=0;i<s.size();i++)
{

    if(s[i]==s[i+1])
    {
        len++;
    }
    else{
        if(len>max)
        {
            max=len;
        }
        len=1;

    }
}
cout<<max;

}