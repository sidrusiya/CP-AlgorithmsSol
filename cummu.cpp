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
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long res=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int j=i-1,k=0;
            long long ab[4]={INT_MIN};
            while(j>=0 && k<2)
            {
                ab[k++]=a[j];
                j--;
            }
            j=i+1;
            while(j<n && k<4)
            {
                ab[k++]=a[j];
                j++;
            }
            sort(ab,ab+4);
            res=max(res,ab[3]+ab[2]+a[i]);
        }
        cout<<res<<endl;
    }
}
