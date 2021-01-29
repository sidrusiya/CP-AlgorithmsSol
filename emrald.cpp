#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,res=0;
        cin>>a>>b;
        long long x = (2*a - b)/3;
        long long y =  (2*b - a)/3;
        if(((a - (2*x + y))==2 && (b - (x + 2*y))==1) || ((a - (2*x + y))==1 && (b - (x + 2*y))==2))
            res++;
        res = res + x + y;
        if(x>=0 && y>=0)
            cout<<res<<endl;
        else
            cout<<0<<endl;
    }
}
