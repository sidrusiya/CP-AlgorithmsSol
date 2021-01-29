#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b)
{
    if(a.first > b.first)
        return false;
    else if(b.first > a.first)
        return true;
    else
    {
        if(a.second > b.first)
            return true;
        else
            return false;
    }
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a;
        vector<pair<int,int>> b(10);
        for(int i=0;i<10;i++)
        {
            b[i].first=0;
            b[i].second=i+1;
        }
        for(int i=0;i<n;i++)
        {
            cin>>a;
            (b[a-1].first)++;
        }
        sort(b.begin(),b.end(),compare);
        int maxp=0,k=1,j;
        for(int i=1;i<10;i++)
        {
            if(b[i].first==0)
                continue;
            if(b[i].first==b[i-1].first)
            {
                k++;
            }
            else
            {
                if(k>maxp)
                 {
                    maxp=k;j=b[i-1].second;
                 }
                k=1;
            }
        }
                 if(k>maxp)
                 {
                    maxp=k;j=b[9].second;
                 }
        cout<<j<<endl;
    }
}
