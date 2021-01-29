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
        int a[n],sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0)
                sum1+=a[i];
            else
                sum2+=a[i];
        }

    }
}
