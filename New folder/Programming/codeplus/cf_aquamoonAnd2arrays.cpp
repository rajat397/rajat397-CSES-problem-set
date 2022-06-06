#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin >> t;
    while(t--)
    {
    int n,sum=0,cnt=0;
    cin >> n;
    int a[n + 1] = {0}, b[n + 1] = {0}, diff[n + 1] = {0};
    vector<int>pos(1,0),neg(1,0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        diff[i] = a[i] - b[i];
        if(diff[i]>0)
        {
            cnt+=diff[i];
            pos.push_back(i);
        }
        else if(diff[i]<0)
        {
            neg.push_back(i);
        }
         sum+=diff[i];
        
    }
    
    if(sum!=0)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<cnt<<"\n";
        int i=1,j=1;
        while(diff[pos.back()]!=0)
        {
            cout<<pos[i]<<" "<<neg[j]<<"\n";
            diff[pos[i]]--;
            diff[neg[j]]++;
            if(diff[pos[i]]==0)
            {
                i++;
            }
            if(diff[neg[j]]==0)
            {
                j++;
            }
            
        }

    }
    }
}