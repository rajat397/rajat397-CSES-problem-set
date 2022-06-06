#include<bits/stdc++.h>
using namespace std;
#define f(d,n,i) for( int i=d; i<n; i++)
struct coder
{
    string name;
    int no_skills;
     map<string,int>  a;
};
struct project
{
    string name;
    int day;
    int score;
    int deadline;
    int coder_no;
    map<string,int>  b;
};
struct answer{

    string nameproj;
    vector<string>members;

};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("outputB.txt","w",stdout);
    #endif
    vector<answer>ans;
    int contri, proj;
    cin>>contri>>proj;
    // cout<<proj<<"\n";
    coder number[contri];
    project nmbr[proj];
    f(0,contri,i)
    {
        cin>>number[i].name;
        cin>>number[i].no_skills;
        f(0, number[i].no_skills, j)
        {
            string p; int q;
            // pair <string,int> c;
            cin>>p>>q;
            // c.first=p;
            // c.second=q;
            number[i].a[p]=q;
        }
    }
    f(0,proj,i)
    {
        cin>>nmbr[i].name;
        cin>>nmbr[i].day;
        cin>>nmbr[i].score;
        cin>>nmbr[i].deadline;
        cin>>nmbr[i].coder_no;
        f(0,nmbr[i].coder_no,j)
        {
            string p; int q;
            // pair <string,int> c;
            cin>>p>>q;
            // c.first=p;
            // c.second=q;
            nmbr[i].b[p]=q;
        }
    }
    f(0,proj,i)
    {
        ans[i].nameproj=nmbr[i].name;
        for(auto j:nmbr[i].b)
        {
            f(0,contri,k)
            {
            if(number[k].a[j.first]>=j.second||number[i].a[j.first]==j.second-1)
            {
               ans[i].members.push_back(number[k].name);
            }
            }
        }
    }
    // cout<<proj<<"\n";
    f(0,proj,i)
    {
       cout<<ans[i].nameproj<<"\n";
       f(0,ans[i].members.size(),j)
       {
           cout<<ans[i].members[j]<<" ";
       }
       cout<<"\n";
    }
    // f(0,contri,i)
    // {
    //     cout<<number[i].name<<" ";
    //     cout<<number[i].no_skills<<" ";
    //     cout<<endl;
    //     f(0, number[i].no_skills, j)
    //     {
    //        cout<<number[i].a[j].first<<" ";
    //        cout<<number[i].a[j].second<<" ";
    //        cout<<endl;
    //     }
    // }
    // f(0,proj,i)
    // {
    //     cout<<nmbr[i].name<<" ";
    //     cout<<nmbr[i].day<<" ";
    //     cout<<nmbr[i].score<<" ";
    //     cout<<nmbr[i].deadline<<" ";
    //     cout<<nmbr[i].coder_no<<" ";
    //     cout<<endl;
    //     f(0,nmbr[i].coder_no,j)
    //     {
    //        cout<<nmbr[i].b[j].first<<" ";
    //        cout<<nmbr[i].b[j].second<<" ";
    //        cout<<endl;
    //     }
    // } 
    
    int tscore;
    
    return 0;
}