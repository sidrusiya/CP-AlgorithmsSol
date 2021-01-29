#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n][4],p=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
            if(a[i][1]==a[i][2])
                p=1;
        }
        if(x%2!=0 || p==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
