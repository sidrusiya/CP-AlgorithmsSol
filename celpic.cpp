#include<bits/stdc++.h>
using namespace std;

int dp1[1000000],dp2[1000000];

int dsf(vector<vector<int>> v,int t,int x,int y,int i)
{
    if(i==v.size())
    {
        return 0;
    }
    int t1=abs(v[i][1]-x)+abs(v[i][2]-y);
    if(dp2[i]==-1)
        dp2[i]= dsf(v,t,x,y,i+1);
    if((t1+t)<=v[i][0])
    {
        if(dp1[i]!=-1)
           return dp1[i];
        dp1[i]=max(1+dsf(v,v[i][0],v[i][1],v[i][2],i+1),dp2[i]);
        return dp1[i];
    }
    return dp2[i];
}

signed main()
{
    int r,n;
    cin>>r>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        vector<int> temp(3);
        cin>>temp[0]>>temp[1]>>temp[2];
        v.push_back(temp);
    }
    for(int i=0;i<1e6;i++)
        dp1[i]=-1,dp2[i]=-1;
    int res=dsf(v,0,1,1,0);
    for(int i=0;i<n;i++)
        cout<<dp1[i]<<" "<<dp2[i]<<endl;
    cout<<res<<endl;
}
