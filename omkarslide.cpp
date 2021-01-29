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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long dif=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]<a[i])
            {
                dif+=(a[i]-a[i+1]);
            }
        }
        cout<<dif<<endl;
    }
}
