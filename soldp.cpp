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
        int a[n];
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

        }
    }
}
