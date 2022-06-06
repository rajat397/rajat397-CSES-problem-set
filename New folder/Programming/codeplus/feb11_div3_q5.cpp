#include <bits/stdc++.h>

using namespace std;
void swap(vector<int>&A,int i,int j)
{
    int temp;
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}
bool solve(vector<int>&A,vector<int>B)
{
    for(int i=0;i<A.size()-1;i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            if(A[i]&A[j]!=0)
            {
             swap(A,i,j);
             if(A==B)
             {
                 return true;
             }
            }
            
        }

    }
    return false;
}
int main()

{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>A(n),B(n);
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
            B[i]=A[i];
        }
        sort(B.begin(),B.end());
        if(solve(A,B))
        {
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";

        }
    }
}