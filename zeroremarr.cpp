#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        long long k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]%k==0)
                a[i]=0;
            else
            {
                long long p=a[i]/k;
                a[i]=(k*(p+1)) - a[i];
            }
        }
        sort(a.begin(),a.end());
        long long c=0,d=0,e=0;
        for(int i=0;i<n;i++)
        {
           if(i==0 || a[i]!=a[i-1])
           {
               if(c>=d && (i!=0 && a[i-1]!=0))
               {
                   d=c;
                   e=a[i-1]+1;
               }
               c=0;
           }
           else
           {
               c++;
           }
        }
        if(c>=d && a[n-1]!=0)
        {
            d=c;
            e=a[n-1]+1;
        }
        cout<<(k*d)+e<<endl;
    }
}
