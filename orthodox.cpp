#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int N;
        scanf("%d",&N);
        long long a[N],p=1;
        for(int i=0;i<N;i++)
            scanf("%lld",a+i);
        /*int b[64]={0},q=0,co=0;
            for(int i=0;i<N;i++)
            {
                p=1;int mo=0;
                while(p<=1e18)
                {
                    if((a[i]&p) == p)
                    {
                        if(b[q]==0)
                            mo=1;
                        b[q]++;
                    }
                    q++;
                    p=p*2;
                }
                if(mo==0)
                {
                    co=1;break;
                }
            }

        if(co==0)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        */
        int s=0;
        for(int i=1;i<N-1;i++)
        {
            if((a[i]|a[i+1])==a[i] || (a[i]|a[i+1])==a[i+1] || (a[i]|a[i-1])==a[i] || (a[i]|a[i-1])==a[i-1])
              {
                s=1;break;
              }
        }
        if(s==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

