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
        int b[n],a[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>b[i];

        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;i++)
            {
                if(b[j]>b[i])
                    a[i]++;
            }
        }

    }
}
