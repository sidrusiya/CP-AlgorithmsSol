#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p=0;
        cin>>n;
        while(n%3==0)
        {
            if(n%6!=0)
            {
                p++;
                n*=2;
            }
            n/=6;
            p++;
        }
        if(n==1)
            cout<<p<<endl;
        else
            cout<<-1<<endl;
    }
}
