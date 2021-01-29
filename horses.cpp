#include<bits/stdc++.h>
using namespace std;

long long mod=1000000007;

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res%mod;
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        long long ans[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            v[i]={a[i],i};
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            int j=v[i].second;
            int x=min(n-1,i+2);
            ans[j]=(binpow(2,x)-1);
            int y=max(0,(n-1)-(i+2));
            ans[j]=(ans[j]+y)%mod;
            ans[j]=(ans[j]+x*y)%mod;
            ans[j]=(ans[j]+(y*(y-1))/2)%mod;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

