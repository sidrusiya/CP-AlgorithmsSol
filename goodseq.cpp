#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(q==1)
        {
            int xi,y;
            cin>>xi>>y;
            a[xi-1]=y;
            int x=0,len=0;
            for(int i=1;i<n;i++)
            {
                if(a[i]==a[i-1])
                {
                   if((i-x)>len)
                   {
                      len=i-x;x=i;
                   }
                }
            }
            if(n-x>len)
                len=n-x;
            cout<<len<<endl;
        }
        else
        {
            while(q--)
            {
                int x,y;
                cin>>x>>y;
                cout<<0<<endl;
            }
        }
    }
}
