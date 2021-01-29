#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,v=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",a+i);
            if(a[i]%2==0)
                v=1;
        }
        if(v==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
