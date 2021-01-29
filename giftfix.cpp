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
        long long a[n],b[n],x=LONG_MAX,y=LONG_MAX,moves=0;
        for(int i=0;i<n;i++)
         {
              cin>>a[i];
              if(x>a[i])
                x=a[i];
         }
        for(int i=0;i<n;i++)
        {
              cin>>b[i];
              if(y>b[i])
                y=b[i];
        }
        for(int i=0;i<n;i++)
        {
            moves+=max(a[i]-x,b[i]-y);
        }
        cout<<moves<<endl;
    }
}
