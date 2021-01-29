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
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        double d=0;
        int i=0,j=n-1,x1=1,x2=1,y1=0,y2=k,yo=0;
        double t1=0,t2=0,t11,t22;
        while(i<=j)
        {
            yo=0;
            t11=((double)(a[i]-y1))/x1;
            t22=((double)(y2-a[j]))/x2;
            if((t1+t11)<(t2+t22))
            {
                x1++;y1=a[i];i++;yo=1;t1+=t11;
            }
            else if((t1+t11)>(t2+t22))
            {
                x2++;y2=a[j];j--;yo=-1;t2+=t22;
            }
            else
            {
                x1++;x2++;
                y1=a[i];y2=a[j];t1+=t11;t2+=t22;
                i++;j--;
            }
        }
        if(yo==1)
        {
            y2-=(x2)*(t1-t2);
        }
        else if(yo==-1)
        {
            y1+=(x1)*(t2-t1);
        }
        if(t1<t2)
            t1=t2;
        t1+=((double)(y2-y1))/(x1+x2);
        cout<<t1<<endl;
    }
}
