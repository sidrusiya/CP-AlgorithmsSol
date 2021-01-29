#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,res=0;
        cin>>n;
        int x[n],y[n];
        for(int i=0;i<n;i++)
            cin>>x[i]>>y[i];
        while(n>=3)
        {
            res+=n;
            n=n/2;
        }
        cout<<res<<endl;
    }
}

