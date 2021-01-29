#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int p[100001];
    for(int i=0;i<=100000;i++)
    {
        p[i]=0;
    }
    for(int i=2;i<=100000;i++)
    {
        if(p[i]==0)
        {
            p[i]=1;
            for(int j=i+i;j<=100000;j+=i)
            {
                p[j]++;
            }
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        int res=0;
        for(int i=a;i<=b;i++)
        {
            if(p[i]==k)
                res++;
        }
        cout<<res<<endl;
    }
}
