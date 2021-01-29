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
        int p[n];
        for(int i=0;i<n;i++)
            cin>>p[i];
        for(int i=0;i<n;i++)
            cout<<p[n-1-i]<<" ";
        cout<<endl;
    }
}
