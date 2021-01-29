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
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second=i+1;
        }
        sort(a.begin(),a.end());
        if((a[0].first+a[1].first)<=a[n-1].first)
            cout<<a[0].second<<" "<<a[1].second<<" "<<a[n-1].second<<endl;
        else
            cout<<"-1"<<endl;
    }
}
