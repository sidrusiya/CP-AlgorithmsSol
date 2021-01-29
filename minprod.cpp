#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        int xi=max(x,a-n);
        int yi=max(y,b-n);
        if(xi<=yi)
        {
            int p=a-xi;
            p=n-p;
            yi=max(y,b-p);
        }
        else
        {
            int p=b-yi;
            p=n-p;
            xi=max(x,a-p);
        }
        cout<<((long long)xi)*((long long)yi)<<endl;
    }
}
