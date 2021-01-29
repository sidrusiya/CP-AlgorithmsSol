#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.second > b.second)
        return true;
    else if(a.second < b.second)
        return false;
    else
    {
        if(a.first < b.first)
            return true;
        else
            return false;
    }

}

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
        vector<pair<int,int>> vec;
        long long x=1;
        for(int i=0;i<32;i++)
        {
            vec.push_back({i,0});
            for(int j=0;j<n;j++)
            {
                if((x&a[j])==x)
                    vec[i].second++;
            }
            vec[i].second*= x;
            x=x*2;
        }

        sort(vec.begin(),vec.end(),cmp);

        long long xi=0;
        for(int i=0;i<k;i++)
        {
              xi= xi^(1<<vec[i].first);
        }
        cout<<xi<<endl;
    }
}
