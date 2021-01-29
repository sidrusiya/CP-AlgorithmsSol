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
        int a[n],sume=0,sumo=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                sume+=a[i];
            else
                sumo+=a[i];
        }
        int sum=sume,l=0,r=n-1,sump=0;
        while(l<r)
        {
            if((r-l)%2==0)
            {
                if(l%2==0 && r%2==0)
                {
                    if(a[l]>a[r])
                        {l++;sump+=a[l-1];}
                    else
                        {sump+=a[r];r--;}
                }
                else
                {
                    if(a[l]>a[r])
                    {
                         sumo-=a[r];
                         r--;
                    }
                    else
                    {
                        sumo-=a[l];
                        l++;
                    }
                }
            }
            if(sum<(sump+sumo))
                sum=sump+sumo;
            if(l%2==0)
            {
                if(a[r-1]>a[l])
                {
                    sump+=a[l];
                    l++;
                }
                else
                {
                    sumo-=a[r];
                    r--;
                }
            }
            else
            {
                if(a[l+1]>a[r])
                {
                    sump+=a[r];
                    r--;
                }
                else
                {
                    sumo-=a[l];
                    l++;
                }
            }
        }
        if(sum<(sump+sumo))
                sum=sump+sumo;
        cout<<sum<<endl;
    }
}
