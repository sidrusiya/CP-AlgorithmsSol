#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int t[n][k],q[n];
    int res=0;
    for(int i=0;i<n;i++)
    {
        long long sum=0;
        for(int j=0;j<k;j++)
        {
            cin>>t[i][j];
            sum+=t[i][j];
        }
        cin>>q[i];
        if(sum>=m && q[i]<=10)
        {
            res++;
        }
    }
    cout<<res<<endl;
}
