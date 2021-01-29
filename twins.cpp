#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];sum+=a[i];
    }
    sort(a,a+n);
    int tum=0,x=0;
    for(int i=n-1;i>=0;i--)
    {
        x++;
        tum+=a[i];
        if(tum>(sum-tum))
            break;
    }
    cout<<x<<endl;
}
