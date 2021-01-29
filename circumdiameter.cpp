#include<bits/stdc++.h>
using namespace std;

vector<int> h(300000,0);

int depth(vector<vector<int>> &v,int x,int parent)
{
    if(h[x]!=0)
        return h[x];
    int maxp=0;
    for(int i=0;i<v[x].size();i++)
    {
        if(v[x][i]!=parent)
            maxp=max(maxp,depth(v,v[x][i],x));
    }
    h[x]=1+maxp;
    return (1+maxp);
}

int dfs(vector<vector<int>> &v,int x,int parent)
{
    int max1=0,max2=0;
    for(int i=0;i<v[x].size();i++)
    {
       if(v[x][i]!=parent)
       {
           int q=depth(v,v[x][i],x);
           if(q>max1)
           {
           max2=max1;
           max1=q;
           }
           else if(q>max2)
            max2=q;
       }
    }
    int maxp=0;
    for(int i=0;i<v[x].size();i++)
    {
        if(v[x][i]!=parent)
        {
            int q=dfs(v,v[x][i],x);
            if(q>maxp)
                maxp=q;
        }
    }
    return max(maxp,1+max1+max2);
}

signed main()
{
    int n,a,b,x=0;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<(n-1);i++)
    {
        cin>>a>>b;
        v[a-1].push_back(b-1);
        v[b-1].push_back(a-1);
    }
    cout<<3*(dfs(v,0,-1)-1);
}
