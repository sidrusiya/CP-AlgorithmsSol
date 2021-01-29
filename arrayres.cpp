#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,diff;
        cin>>n>>x>>y;
        int q=n,xi=x,yi=y,p=1,l,k=0;
        n--;
        while(n>0)
        {
            if((y-x)%n==0)
            {
                l=n;
                diff=(y-x)/n;
                break;
            }
            n--;
        }
        for(int i=0;i<=l;i++)
        {
            cout<<xi<<" ";
            xi=xi+diff;
            k++;
        }
        x=x-diff;
        while(x>0 && k<q)
        {
            cout<<x<<" ";
            x-=diff;
            k++;
        }
        while(k<q)
        {
            y+=diff;
            cout<<y<<" ";
            k++;
        }
        cout<<endl;

    }
}
