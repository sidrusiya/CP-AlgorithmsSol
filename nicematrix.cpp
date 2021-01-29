#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        long long res=0;
        for(int i=0;i<((n+1)/2);i++)
        {
            for(int j=0;j<((m+1)/2);j++)
            {
                if(i==(n/2))
                {
                    res+=abs(a[i][j]-a[i][m-1-j]);
                }
                else if(j==(m/2))
                {
                    res+=(abs(a[i][j]-a[n-1-i][j]));
                }
                else
                  {
                      long long w=a[i][j],x=a[n-1-i][j],y=a[n-1-i][m-1-j],z=a[i][m-1-j];
                      long long p=abs(w-x)+abs(w-y)+abs(w-z);
                      long long q=abs(x-w)+abs(x-y)+abs(x-z);
                      long long r=abs(y-w)+abs(y-x)+abs(y-z);
                      long long s=abs(z-w)+abs(z-x)+abs(z-y);
                      res+=min(min(min(p,q),r),s);
                  }
            }
        }
        cout<<res<<endl;
    }
}
