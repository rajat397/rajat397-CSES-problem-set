#include<bits/stdc++.h>

using namespace std;

int main()

{

int d;
cin>>d;
if(d&1)
{
    cout<<-1<<"\n";

}
else{
    cout<<d/2<<" "<<0<<"\n";
    cout<<-d/2<<" "<<0<<"\n";
    cout<<0<<" "<<d/2<<"\n";
    cout<<0<<" "<<-d/2<<"\n";

}
}