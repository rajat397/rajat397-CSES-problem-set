#include<bits/stdc++.h>

using namespace std;

int hcf(int a,int b)
{
	int x=min(a,b);
	int y=max(a,b);
	while((y%x)!=0)
	{
		int temp=x;
		x=y%x;
		y=temp;
	}

    return x;


}

int main()

{
int t;
cin>>t;
while(t--)
{
    int n,d,cnt=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cout<<hcf(i,n)<<"\n";
        if(hcf(i,n)==d)
        {
            cnt++;
        }

    }
    cout<<cnt<<"\n";
}

}