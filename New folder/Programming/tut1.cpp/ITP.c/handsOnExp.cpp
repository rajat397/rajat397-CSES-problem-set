#include<bits/stdc++.h>

using namespace std;

int main()

{
for(int i=0;i<5;i++)
{
double x,y;
cout<<"enter the value of   x ,y"<<"\n";
cin>>x>>y;
double c=((((22*x*x*1e-6)/2)-((x*x*x*1e-6)/6))/(y*1e-2));
double Y=((((22*x*x*1e-6)/2)-((x*x*x*1e-6)/6))/(y*1e-2))*(280*1e-3*10*12)/(2.4*0.09*0.09*0.09*1e-8);
cout<<"the value of the constant c is "<<c<<"\n";
cout<<"the value of the Youngs Modulus Y is "<<Y<<"\n";
}

}