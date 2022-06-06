#include<bits/stdc++.h>

using namespace std;

int main()

{

int n,j=1,flag=0;
cin>>n;
set<string>str;
for(int i=0;i<n;i++)
{
    string s,s1;
    j=1;
    cin>>s;
    s1=s;
    if(str.count(s)==0)
    {
        cout<<"OK"<<"\n";
        str.insert(s);
    }
    else{
        while(true)
        {
            if(str.count(s)==1)
            {
                if(flag)
            {
               s=s1;  
            }
            flag++;
           s+=to_string(j);
                j++;
            }
            else{
                break;
            }
      
        }
        str.insert(s);
        cout<<s<<"\n";
    }
}

}