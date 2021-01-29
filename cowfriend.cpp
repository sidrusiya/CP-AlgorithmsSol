#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],maxp=0,maxpi=0,sum1=INT_MAX,sum2=0;
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
             if(maxp<a[i])
                maxp=a[i];
             if(maxpi<a[i] && x%a[i]==0)
                maxpi=a[i];
        }
        if(maxpi)
          sum1=(x/maxpi);
        sum2=(x/maxp);
        if(sum2>=1)
            sum2--;
        sum2+=2;
        int sum=min(sum1,sum2);
        cout<<sum<<endl;
    }
}
