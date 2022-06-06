#include<bits/stdc++.h>

using namespace std;
int Isprime(long long int n)
{
          for(int i=2;i*i<=n;i++)
          {
               if(n%i==0)
               return 0;
          }
          return 1;
}

int main()

{

long long int t;
cin>>t;
while(t--)
{
long long int a,b,flag=0;
cin>>a>>b;
if(a==1||b==1)
{
    cout<<-1<<endl;
}
else if((a==3&&b==4)||(a==4&&b==3)||(a==2&&b==3)||(a==3&&b==2))
{
    cout<<1<<endl;
}
else if(a%2==0&&b%2==0)
{
    cout<<0<<endl;
}
else if(a%2==1&&b%2==1||abs(a-b)%2==1)
{
    while(__gcd(a,b)!=1)
    {
        if(Isprime(__gcd(a,b)))
        {
            cout<<0<<endl;
            flag=1;
            break;
        }
        else{
            a=a/__gcd(a,b);
            b=b/__gcd(a,b);
        }
    }
}

if(flag==0)
{
    cout<<1<<endl;
}

}
}