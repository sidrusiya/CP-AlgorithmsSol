#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int a[n]={0},x=0;
        for(int i=0;i<n;i++)
        {
            a[i]=x;
            if(s[i]=='1')
            {
                a[i]++;
            }
            x=a[i];
        }
        long long res=0;
        for(int x=1;(x*x + x)<=n;x++)
        {
            for(int i=0;(i+(x*x+x))<=n;i++)
            {
                int st=(i==0)?0:a[i-1];
                int en=a[i+(x*x+x)-1];
                int p=en-st;
                int q=((x*x+x)-p);
                if(q==(p*p))
                    res++;
            }
        }
        cout<<res<<endl;
    }
}
