#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int a[n],p[20]={0},q=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<20;i++)
    {
       for(int j=0;j<n;j++)
       {
           if(a[j]&q)
             p[i]++;
       }
       q=q*2;
    }
    vector<long long> w(n,0);
    q=1;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<p[i];j++)
            w[j]+=q;
        q*=2;
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(w[i]*w[i]);
    }
    cout<<sum<<endl;
}
