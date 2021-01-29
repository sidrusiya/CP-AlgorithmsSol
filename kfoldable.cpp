#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p=0,q=0;
        cin>>n>>k;
        string s,res="";
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                p++;
            else
                q++;
        }
        int x=n/k;
        if((p%x)!=0 || (q%x!=0))
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            for(int i=0;i<x;i++)
            {
                if(i%2==0)
                {
                    for(int i=0;i<(p/x);i++)
                        res+='0';
                    for(int i=0;i<(q/x);i++)
                        res+='1';
                }
                else
                {
                    for(int i=0;i<(q/x);i++)
                        res+='1';
                    for(int i=0;i<(p/x);i++)
                        res+='0';
                }
            }
            cout<<res<<endl;
        }
    }
}
