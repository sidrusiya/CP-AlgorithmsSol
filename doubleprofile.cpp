#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<long long,long long> a,pair<long long,long long> b)
{
    return a.first==b.first ? a.second<b.second : a.first < b.first;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> pa(m);
    for(int i=0;i<m;i++)
        cin>>pa[i].first>>pa[i].second;
    const int p1 = 31;
    const int p2 = 37;
    const int mm = 1e9 + 9;
    const int mn = 2860486313;
    vector<long long> p_pow1(n);
    vector<long long> p_pow2(n);
    p_pow1[0] = 1;
    p_pow2[0] = 1;
    for (int i = 1; i < n; i++)
        p_pow1[i] = (p_pow1[i-1] * p1) % mm;
    for (int i = 1; i < n; i++)
        p_pow2[i] = (p_pow2[i-1] * p2) % mn;
    vector<long long> h1(n,0);
    vector<long long> h2(n,0);
    for(int i=0;i<m;i++)
    {
        h1[pa[i].first-1] = (h1[pa[i].first-1] + ((pa[i].second * p_pow1[pa[i].second-1])%mm))%mm;
        h1[pa[i].second-1] = (h1[pa[i].second-1] + ((pa[i].first * p_pow1[pa[i].first-1])%mm))%mm;
        h2[pa[i].first-1] = (h2[pa[i].first-1] + ((pa[i].second * p_pow2[pa[i].second-1])%mn))%mn;
        h2[pa[i].second-1] = (h2[pa[i].second-1] + ((pa[i].first * p_pow2[pa[i].first-1])%mn))%mn;
    }
    long long int res=0;
    for(int i=0;i<m;i++)
    {
        long long x1 = (h1[pa[i].first-1] + ((pa[i].first * p_pow1[pa[i].first-1])%mm))%mm;
        long long y1 = (h1[pa[i].second-1] + ((pa[i].second * p_pow1[pa[i].second-1])%mm))%mm;
        long long x2 = (h2[pa[i].first-1] + ((pa[i].first * p_pow2[pa[i].first-1])%mn))%mn;
        long long y2 = (h2[pa[i].second-1] + ((pa[i].second * p_pow2[pa[i].second-1])%mn))%mn;
        if(x1==y1 && x2==y2)
            res++;
    }
    vector<pair<long long,long long>> hg;
    for(int i=0;i<n;i++)
        hg.push_back({h1[i],h2[i]});
    sort(hg.begin(),hg.end(),cmp);
    long long xifi=0;
    for(int i=1;i<n;i++)
    {
        if(hg[i].first==hg[i-1].first && hg[i].second==hg[i-1].second)
        {
           xifi++;
        }
        else
        {
           res+=((xifi*(xifi+1))/2);
           xifi=0;
        }
    }
    res+=((xifi*(xifi+1))/2);
    printf("%I64d",res);
}
