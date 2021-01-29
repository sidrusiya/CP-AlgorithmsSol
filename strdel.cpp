#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res=0,len=1,p=0,plen=0;
        for(int i=1;i<=n;i++)
        {
            if(i!=n && s[i]==s[i-1])
            {
                len++;
            }
            else
            {
                 if(len!=1)
                 {
                     res++;
                     if((len-2)>=plen)
                     {
                         res+=plen;
                         plen=0;
                     }
                     else
                     {
                         res+=(len-2);
                         plen-=(len-2);
                     }
                 }
                else
                {
                   plen++;
                }
                len=1;
            }
        }
        res+=(plen+1)/2;
        cout<<res<<endl;
    }
}
