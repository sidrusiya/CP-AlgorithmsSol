#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int res=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]<=k)
                res+=(k-a[i])/a[0];
        }
        cout<<res<<endl;
    }
}
