#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int p[300];
    for(int i=0;i<300;i++)
        p[i]=1;
    p[0]=p[1]=0;
    for(int i=2;i<300;i++)
    {
        if(p[i]==1)
        {
            for(int j=i+i;j<300;j+=i)
                p[j]=0;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,res=0;
        cin>>n;
        for(int i=6;i<=(n/2);i++)
        {
            int res1=0,res2=0;
            for(int j=2;(j*j)<i;j++)
            {
                if(i%j==0 && p[j] && p[i/j])
                    {
                        res1=1;break;
                    }
            }
            for(int j=2;(j*j)<(n-i);j++)
            {
                if((n-i)%j==0 && p[j] && p[(n-i)/j])
                   {
                        res2=1;break;
                   }
            }
            if(res1 && res2)
            {
                res=1;break;
            }
        }
        if(res)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
