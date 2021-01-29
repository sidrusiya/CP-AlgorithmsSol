#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    pair<int,int> a[n];
    long long minx=INT_MAX,miny=INT_MAX,maxx=0,maxy=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
        if(a[i].first>maxx)
            maxx=a[i].first;
        if(a[i].first<minx)
            minx=a[i].first;
        if(a[i].second>maxy)
            maxy=a[i].second;
        if(a[i].second<miny)
            miny=a[i].second;
    }
    long long area=max((36,max(minx*500,(100000-maxx)*500));
    cout<<area<<endl;
}
