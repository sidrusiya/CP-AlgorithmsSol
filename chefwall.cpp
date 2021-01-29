#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,q;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",a+i);
        scanf("%d",&q);
        int x,y;
        for(int i=0;i<q;i++)
        {
           scanf("%d %d",&x,&y);
           int r=x+y,l=0,h=n-1,m,lo=0;
           while(l<h)
           {
               m=(l+h)/2;
               if(a[m]==r)
                  break;
               else if(a[m]>r)
                  h=m-1;
               else
                  l=m+1;
           }
           m=(l+h)/2;
           if(a[m]==r)
             printf("-1\n");
           else
           {
               if(a[l]>r)
                 printf("%d\n",l);
               else
                printf("%d\n",l+1);
           }
        }
    }
}
