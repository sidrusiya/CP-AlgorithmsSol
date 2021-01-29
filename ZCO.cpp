#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int> a,vector<int> b)
{
    return a[1]<=b[1];
}

signed main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<vector<int>> v(n,vector<int>());
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v[i].push_back(x);
        v[i].push_back(y);
    }
    sort(v.begin(),v.end());
    int b[x],c[y];
    for(int i=0;i<x;i++)
        cin>>b[i];
    for(int i=0;i<y;i++)
        cin>>c[i];
    sort(b,b+x);
    sort(c,c+y);
    int j=0;
    for(int i=0;i<n;i++)
    {
        while(j<x && b[j]<=v[i][0])
        {
            j++;
        }
        if(j==0)
            v[i].push_back(1e5);
        else
            v[i].push_back(b[j-1]);
    }
    sort(v.begin(),v.end(),compare);
    j=y-1;
    for(int i=n-1;i>=0;i--)
    {
        while(j>=0 && c[j]>=v[i][1])
            j--;
        if(j==y-1)
            v[i].push_back(1e5);
        else
            v[i].push_back(c[j+1]);
    }
    for(int i=0;i<n;i++)
        cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<" "<<v[i][3]<<endl;
    int minp=INT_MAX;
    for(int i=0;i<n;i++)
        minp=min(minp,v[i][3]+1-v[i][2]);
    cout<<minp<<endl;
}
