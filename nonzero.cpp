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
        int a[n],sume=0,sumo=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=0)
                sumo+=(-a[i]);
            else
                sume+=a[i];
        }
        if(sumo==sume)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(sume>sumo)
            {
                sort(a,a+n,greater<int>());
            }
            else
            {
                sort(a,a+n);
            }
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}
