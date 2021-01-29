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
        int b[n],p=0;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if((i+1) % b[i])
                p=1;
        }
        if(p)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
