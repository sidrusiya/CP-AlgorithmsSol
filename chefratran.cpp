#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(b.first > a.first)
        return false;
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
        int n,m,ans=0;
        cin>>n>>m;
        int r[n];
        for(int i=0;i<n;i++)
        {
            cin>>r[i];
        }
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(j==0)
                {
                    a[i][j]+=r[i];
                }
                else
                {
                    a[i][j]+=a[i][j-1];
                }
            }
        }
        int b[n]={-1},c[n]={-1};
        for(int i=0;i<m;i++)
        {
            vector<pair<int,int>> d;
            for(int j=0;j<n;j++)
            {
                d.push_back({a[j][i],j});
            }
            sort(d.begin(),d.end(),compare);
            int k=1;
            if(b[d[0].second]==-1 || (c[d[0].second]>k))
                   {
                      b[d[0].second]=i;
                      c[d[0].second]=k;
                   }
            for(int j=1;j<n;j++)
            {
               if(d[j].first==d[j-1].first)
               {
                   if(b[d[j].second]==-1 || (c[d[j].second]>k))
                   {
                      b[d[j].second]=i;
                      c[d[j].second]=k;
                   }
               }
               else
               {
                  k=j+1;
                  if(b[d[j].second]==-1 || (c[d[j].second]>k))
                   {
                      b[d[j].second]=i;
                      c[d[j].second]=k;
                   }

               }
            }
        }
        for(int i=0;i<n;i++)
        {
            int maxp=0,ku=-1;
            for(int j=0;j<m;j++)
            {
               if(a[i][j]>maxp)
                   {
                      maxp=a[i][j];
                       ku=j;
                   }
            }
            if(ku!=b[i] )
                ans++;
        }
        cout<<ans<<endl;
    }
}
