#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n,k,mov=0;
        cin>>n>>k;
        if(k>n)
            mov=(k-n);
        else
        {
            if((k+n)%2 != 0)
                mov=1;
        }
        cout<<mov<<endl;
    }
}
