#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int x=0,y=0,tar=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==5)
                x=x+1;
            else if(a[i]==10)
            {
                if(x>0)
                {
                    x=x-1;
                    y=y+1;
                }
                else
                {
                    tar=1;
                }
            }
            else
            {
                if(y>0)
                    y--;
                else if(x>=2)
                    x-=2;
                else
                {
                    tar=1;
                }
            }
        }
        if(tar==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
