#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,res=0;
        cin>>n>>m;
        char a;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a;
                if(i==n-1 && a=='D')
                    res++;
                if(j==m-1 && a=='R')
                    res++;
            }
        }
        cout<<res<<endl;
    }
}
