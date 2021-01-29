#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        for(i=n;i>0;i-=2)
        {
            cout<<i<<" ";
        }
        if(i==-1)
            i=2;
        else
            i=1;
        while(i<n)
        {
            cout<<i<<" ";
            i+=2;
        }
        cout<<endl;
    }
}
