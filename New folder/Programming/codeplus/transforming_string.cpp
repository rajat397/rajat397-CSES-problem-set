#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;int i;
	getline(cin,s);
	for(i=0;i<=s.size();i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			s[i]=s[i]+32;
		}
		else if(s[i]>=97&&s[i]>=122)
		{
			s[i]=s[i]-32;
		}
	}
    cout<<s;
}