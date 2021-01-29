#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        while(g--)
        {
            int i,n,q;
            cin>>i>>n>>q;
            if(n%2==0)
            {
                cout<<n/2<<endl;
            }
            else
            {
                if((i==1) ^ (q==1))
                {
                    cout<<(n/2)+1<<endl;
                }
                else
                {
                    cout<<(n/2)<<endl;
                }
            }
        }
    }
}
