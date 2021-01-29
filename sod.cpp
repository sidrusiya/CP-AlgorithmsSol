#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,ni,sum=0;
        int s,p=1;
        cin>>n>>s;
        ni=n;
        int b[20],c[20]={0};
        for(int i=0;i<20;i++)
        {
            b[i]=ni%10;
            ni=ni/10;
        }
        int t;
        for(int i=19;i>=0;i--)
        {
            if(b[i]==0 && p)
                continue;
            p=0;
            if(sum<s)
                t=i;
            sum+=b[i];
            if(sum>s)
            {
                c[t+1]++;
                for(int j=t;j>=i;j--)
                    c[j]=0;
                break;
            }
            c[i]=b[i];
        }
        long long res=0;
        for(int i=19;i>=0;i--)
        {
            res=(10*res)+c[i];
        }
        cout<<(res-n)<<endl;
    }
}
