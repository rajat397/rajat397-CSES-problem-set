#include<bits/stdc++.h>

using namespace std;

int main()

{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    for(int i=0;i<5;i++)
    {
const double pi=3.14159265;
double t;
cout<<"enter the time period "<<"\n";
cin>>t;
double Y=((280*1e-3)*(22*22*22*1e-6)*(4*pi*pi))/((3*2.4*0.09*0.09*0.09*1e-8*t*t)/12);
cout<<"the youngs modulus Y is  "<<Y<<"\n";
}
}