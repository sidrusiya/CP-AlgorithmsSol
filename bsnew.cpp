#include<bits/stdc++.h>
using namespace std;

signed main()
{
        int n,xi,pos;
        cin>>n>>xi>>pos;
        int left=0,right=n,x=0,y=0;
        while(left<right)
        {
            int m=(left+right)/2;
            if(m<pos)
              {
                 x++;
                 left=m+1;
              }
            if(m>pos)
              {
                 y++;
                 right=m;
              }
             if(m==pos)
             {
                 left=m+1;
             }
        }
        long long res=1,m=1e9+7;
        for(int i=1;i<=x;i++)
        {
            res=(res*(xi-i))%m;
        }
        for(int i=0;i<y;i++)
        {
            res=(res*(n-xi-i))%m;
        }
        for(int i=(n-1-x-y);i>0;i--)
        {
            res=(res*i)%m;
        }
        cout<<res<<endl;
}

