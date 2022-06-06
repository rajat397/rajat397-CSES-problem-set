#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;
cin>>t;
while(t--)
{
    int n,len=1,sum=0,flag=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            len++;
        }
        else{
			flag++;
            sum+=(len*(len+1))/2;
            len=1;
        }
    }

 
	 if(len!=1)
 {
     cout<<(sum+(len*(len+1))/2)<<"\n";
 }   
 else if(len==1)
 {
     cout<<sum+1<<"\n";
 }
 
}
}