#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p=0;
        cin>>n;
        float x = ((n-2)*180.0)/n;
        float sum=0.0;
        while(n--)
        {
           sum+=x;
           if(sum>=360.0)
                sum-=360.0;
           if(sum==90.0)
           {
               cout<<"YES"<<endl;
               p=1;
               break;
           }
        }
        if(p==0)
            cout<<"NO"<<endl;
    }
}
