#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long sum=a[0];
        for(int i=1;i<n;i++)
        {
            if((i*a[i])<d)
            {
                sum+=a[i];
                d-=(i*a[i]);
            }
            else
            {
                sum+=(d/i);
                d=0;
                break;
            }
        }
        cout<<sum<<endl;
    }
}
