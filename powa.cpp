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
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long minp=a[0],maxp=a[n-1];
        for(int i=0;i<k;i++)
        {
            minp=0;
            maxp+=a[(n-2)-i];
        }
        cout<<(maxp-minp)<<endl;
    }
}