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
        int s[n],minp=INT_MAX;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            minp=min(minp,s[i]);
            sum+=minp;
        }
        cout<<sum<<endl;
    }
}
