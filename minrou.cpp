#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int diff=abs(y-x);
        if(y>x)
        {
            if(diff%2)
                cout<<1<<endl;
            else
                {
                    int r=1;
                    while(diff&1)
                    {
                        r++;diff>>=1;
                    }
                    cout<<r<<endl;
                }
        }
        else if(y<x)
        {
            if(!(diff%2))
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else
            cout<<0<<endl;
    }
}
