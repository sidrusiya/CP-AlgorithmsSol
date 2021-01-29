#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x=0,p=0,q=0,r=0,s=0,mp=0,mr=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            x++;p++;r++;
        }
        else
        {
            if(x>0)
                {x--;p--;r++;}
        }
        if(x==0)
        {
            if(mr<r)
           {
            mr=r;
            s=i+2-r;
           }
            r=0;
        }
        if(p>mp)
        {
            mp=p;
            q=i+1;
        }
    }
    cout<<mp<<" "<<q<<" "<<mr<<" "<<s<<endl;
}
