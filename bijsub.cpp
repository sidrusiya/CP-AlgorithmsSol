#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a=0,b=0,c=0,p=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='0')
                a++;
            else if(s[i]=='1')
                b++;
            else
            {
                c++;
            }
        }
        a=(k/2)-a;
        b=(k/2)-b;
        if(a<0 || b<0)
            p=1;
        for(int i=0;(i+k)<n;i++)
        {
               if((s[i]=='1' && s[i+k]=='0' )|| (s[i]=='0' && s[i+k]=='1'))
               {
                   p=1;break;
               }
               if(s[i]=='1'&& s[i+k]=='?')
                  s[i+k]='1';
               if(s[i]=='0'&& s[i+k]=='?')
                  s[i+k]='0';
               if(s[i]=='?')
               {
                   if(s[i+k]=='0')
                   {
                       if(a==0)
                       {
                           p=1;break;
                       }
                       a--;
                   }
                   else if(s[i+k]=='1')
                   {
                       if(b==0)
                       {
                           p=1;break;
                       }
                       b--;
                   }
               }
        }
        if(p==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
