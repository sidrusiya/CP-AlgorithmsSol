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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int k=0,x=a[0],l=0,mexa=0,mexb=0,b=1,c=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
                k++;
            else
            {
                if(x!=l)
                   {
                     c=0;break;
                   }
                if(k==1)
                    b=0;
                if(b)
                {
                    mexa++;mexb++;
                }
                else
                    mexa++;
                x=a[i];
                k=1;
                l++;
            }
        }
                if(x!=l)
                    c=0;
                if(k==1)
                    b=0;
                if(b && c)
                {
                    mexa++;mexb++;
                }
                else if(c)
                    mexa++;

        cout<<mexa+mexb<<endl;

    }
}
