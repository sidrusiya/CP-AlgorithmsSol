#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long N,K;
        scanf("%lld %lld",&N,&K);
        long long a[N];
        for(long long i=0;i<N;i++)
            scanf("%lld",a+i);
        string s="";
        for(long long i=0;i<N;i++)
        {
            if((a[i]%K)==0)
                s+='1';
            else
                s+='0';
        }
        cout<<s<<endl;
    }
}
