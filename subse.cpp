#include<bits/stdc++.h>
using namespace std;

signed main()
{
    long long k;
    scanf("%lld",&k);
    cout<<"codeforces";
    long long p=10;
    while(p<k)
    {
        cout<<"codeforces";
        p=p*10;
    }
    p=p/10;
    for(int i=1;(p*i)<k;i++)
    {
        cout<<"s";
    }
}
