#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i]) > 1)
            {
               p=1;break;
            }
        }
        if(p==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
