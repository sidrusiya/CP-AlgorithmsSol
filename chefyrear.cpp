#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,m;
    cin>>n>>m;
    unordered_map<string,string> mp;
    for(int i=0;i<n;i++)
    {
        string x,y;
        cin>>x>>y;
        mp[x]=y;
    }
    unordered_map<string,int> sp,tp;
    for(int i=0;i<m;i++)
    {
        string x;
        cin>>x;
        sp[x]++;
    }
    vector<string> v,s;
    int maxp=0;
    for(auto i:sp)
    {
        if(maxp<i.second)
        {
            maxp=i.second;
            v.clear();
            v.push_back(i.first);
        }
        else if(maxp==i.second)
            {v.push_back(i.first);}
        tp[mp[i.first]]+=i.second;
    }
    maxp=0;
    for(auto i:tp)
    {
        if(maxp<i.second)
        {
            maxp=i.second;
            s.clear();
            s.push_back(i.first);
        }
        else if(maxp==i.second)
            {s.push_back(i.first);}
    }
    sort(s.begin(),s.end());
    sort(v.begin(),v.end());
    cout<<s[0]<<endl;
    cout<<v[0]<<endl;
}
