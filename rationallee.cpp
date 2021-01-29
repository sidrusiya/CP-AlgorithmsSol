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
        vector<long long> a(n);
        int w[k],p=0;
        long long sum=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<k;i++)
        {
            cin>>w[i];
            if(w[i]==1)
               p++;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<k;i++)
        {
            sum+=a[n-1-i];
            if(i<p)
               sum+=a[n-1-i];
            else
               sum+=a[i-p];
        }
        cout<<sum<<endl;
    }
}
