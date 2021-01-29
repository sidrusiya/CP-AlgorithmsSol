#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length(),ao[n],ac[n],b[n],o=0,c=0;
        ao[0]=0;ac[0]=0;
        for(int i=1;i<n;i++)
        {

                ao[i]=ao[i-1];
                ac[i]=ac[i-1];

            if(s[i-1]=='(')
                ao[i]++;
            else
                ac[i]++;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
                b[i]=i+1;
            else
            {
                if(i==n-1)
                    b[i]=-1;
                else
                     b[i]=b[i+1];
            }
        }
        int q;
        scanf("%d",&q);
        int ko;
        for(int i=0;i<q;i++)
        {
           scanf("%d",&ko);
           int po=b[ko-1];
               while((ac[po-1]-ac[ko-1]+1)!=(ao[po-1]-ao[ko-1]) && po!=-1 && po!=n)
               {
                   po=b[po];
               }
               if(po==n && (ac[po-1]-ac[ko-1]+1)!=(ao[po-1]-ao[ko-1]))
                  printf("-1\n");
               else
                  printf("%d\n",po);
        }
    }
}
