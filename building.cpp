#include<bits/stdc++.h>
using namespace std;

long long f(int x,int n,int h[],int c[])
{
    long long cost=0;
    for(int i=0;i<n;i++)
    {
        cost+=(abs(x-h[i]))*(c[i]);
    }
    return cost;
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int h[n],c[n],maxp=0;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            maxp=max(maxp,h[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        int l=-1,r=maxp+1;
        long long minc=LONG_MAX;
        while((r-l)>=3)
        {
            int m1=l+(r-l)/3;
            int m2=r-(r-l)/3;
            long long q=f(m1,n,h,c);
            long long w=f(m2,n,h,c);
            minc=min(minc,min(q,w));
            if(q<w)r=m2;else l=m1;
        }
        cout<<minc<<endl;
    }
}
