#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,m,res=0;
    cin>>n>>m;
    int a[n],b[m],c[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
    {
        int y=INT_MAX;
        for(int j=0;j<m;j++)
        {
            int x=res|(a[i]&b[j]);
            if(x<y)
                y=x;
        }
        res=y;
    }
    cout<<res<<endl;
}
