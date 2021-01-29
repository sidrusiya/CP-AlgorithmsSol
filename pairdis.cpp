#include<bits/stdc++.h>
using namespace std;

int next(pair<int,int> arr[], long long target, int endi)
{
    int start = 0;

    int ans = -1;
    while (start <= endi)
    {
        int mid = (start + endi) / 2;

        // Move to right side if target is
        // greater.
        if (arr[mid].first < target)
            start = mid + 1;

        // Move left side.
        else
        {
            ans = mid;
            endi = mid - 1;
        }
    }

    return ans;
}

signed main()
{
    int n,m;
    cin>>n>>m;
    pair<int,int> a[n],b[m];
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        a[i].first=v;
        a[i].second=i;
    }
    for(int i=0;i<m;i++)
    {
        int v;
        cin>>v;
        b[i].first=v;
        b[i].second=i;
    }
    sort(a,a+n);
    sort(b,b+m);
    long long p=INT_MIN;
    int z,x=1;
    for(int i=0;i<n && x<(n+m);i++)
    {
        p-=a[i].first;
        int y=next(b,p,m);
        for(int j=y;j<m && x<(n+m);j++)
        {
            cout<<a[i].second<<" "<<b[j].second<<endl;
            x++;
            p=a[i].first+b[j].first;
        }
    }
}
