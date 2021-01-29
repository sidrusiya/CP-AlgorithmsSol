#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%2==0)
            cout<<n/2<<endl;
        else
            cout<<(n/2)+1<<endl;
    }
}

