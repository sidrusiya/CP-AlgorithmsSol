#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",a+i);
        }
        int res=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
                res++;
            else
                a[i]=a[i-1];
        }
        cout<<res<<endl;
    }
}

