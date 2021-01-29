#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,n;
        cin>>x>>y>>n;
        long long p = (n-y)/x;
        cout<<p*x+y<<endl;
    }
}
