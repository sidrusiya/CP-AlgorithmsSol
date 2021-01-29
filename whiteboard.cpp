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
        cout<<2<<endl;
        for(int i=n;i>=2;i--)
        {
            if(i==(n-1))
                cout<<i<<" "<<i<<endl;
            if(i>2)
               cout<<i<<" "<<i-2<<endl;
        }
        if(n==2)
            cout<<2<<" "<<1<<endl;
    }
}
