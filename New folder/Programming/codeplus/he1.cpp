#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A[100],i,k,n;
	cin >>k>> n;
	for( i=0;i<n;i++)
	{
        cin>>A[i];
	}
   
	for(i=0;i<k;i++)
	{
	int x=A[n-1];
	for(i=n-2;i>=0;i--)
	{
		A[i+1]=A[i];

	}
	A[0]=x;
	}

	 for(i=0;i<n;i++)
	{
		cout<<A[i];
	}
	
	}