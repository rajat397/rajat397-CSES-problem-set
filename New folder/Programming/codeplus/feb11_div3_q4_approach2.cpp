#include<bits/stdc++.h>

using namespace std;
void solve(vector<int>&v,int j)
{
    
     

     for(int i=j+2;i<v.size();i++)
     {
         if(v[i]==i+1)
         {
             
             v.insert(v.begin()+i,0);
             

             solve(v,i);
             break;

         }
     }
     
         return;
     
    
}

int main()

{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(v,-2);
    cout<<v.size()-n<<"\n";
}
}