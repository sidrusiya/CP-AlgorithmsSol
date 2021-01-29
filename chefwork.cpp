#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int w[n];
        for(int i=0;i<n;i++)
            cin>>w[i];
        int r=1,sum=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(w[i]>k)
            {
                p=1;break;
            }
            sum+=w[i];
            if(sum>k)
            {
                r++;
                sum=w[i];
            }
        }
        if(p==1)
            cout<<-1<<endl;
        else
            cout<<r<<endl;
    }
}
