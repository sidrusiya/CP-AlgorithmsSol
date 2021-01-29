#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,k=0;
        cin>>a>>b>>n;
        while(a<=n && b<=n)
        {
            if(a<=b)
            {
                a+=b;
            }
            else
            {
                b+=a;
            }
            k++;
        }
        cout<<k<<endl;
    }
}
