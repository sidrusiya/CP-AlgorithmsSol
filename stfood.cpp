#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[n],v[n],p[n],maxp=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i]>>v[i]>>p[i];
            maxp=max(maxp,(p[i]/(s[i]+1))*v[i]);
        }
        cout<<maxp<<endl;
    }
}
