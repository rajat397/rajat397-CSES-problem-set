#include<bits/stdc++.h>

# define m 1000000007;
int f(int x,int y){

if(y&1)
{
    return ((f(x,y/2)%m)*((f(x,y/2)%m)*x))%m;
}
else{
     return (f(x,y/2)%m)*((f(x,y/2)%m))%m;
}
   
} 

using namespace std;

int main()

{

cout<< f(14, 98765432123456789);

}

