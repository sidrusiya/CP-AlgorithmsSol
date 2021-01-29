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
        int x=0,p=0,y=0,z=0,r=0;
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='W')
            {
                if(i==0 || x!=0)
                {
                    if(p)
                        res.push_back(x);
                    else
                        y=x;
                    r++;
                }
                else
                {
                    r+=2;
                }
                x=0;
                p=1;
            }
            else
            {
                x++;
            }
        }
        z=x;
        sort(res.begin(),res.end());

        for(int i=0;i<res.size()&&k>0;i++)
        {
            if(k>=res[i])
            {
                r+=2*res[i];
                k-=res[i];
                r++;
            }
            else
            {
                r+=2*k;
                k=0;
            }
        }
        if(k>0 && y>0)
        {
            if(k>=y)
               {
                  r+=2*y;k-=y;
               }
            else
                {r+=2*k;k=0;}
        }
        if(k>0 && z>0)
        {
            if(k>=z)
               {
                  r+=2*z;k-=z;
               }
            else
                {r+=2*k;k=0;}
            if(p==0)
            r--;
        }
        cout<<r<<endl;
    }
}
