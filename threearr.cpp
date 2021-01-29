#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<n;i++)
            cin>>c[i];
        int p[n];
        for(int i=0;i<n;i++)
        {
            if(i==0)
                p[i]=a[i];
            else if(i==(n-1))
            {
                if(a[i]!=p[0] && a[i]!=p[n-2])
                    p[i]=a[i];
                else if(b[i]!=p[0] && b[i]!=p[n-2])
                    p[i]=b[i];
                else
                    p[i]=c[i];
            }
            else
            {
                if(p[i-1]!=a[i])
                    p[i]=a[i];
                else if(p[i-1]!=b[i])
                    p[i]=b[i];
                else
                    p[i]=c[i];
            }
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
}
