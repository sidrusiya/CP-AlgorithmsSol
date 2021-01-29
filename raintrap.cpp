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
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxp=-1,res1=0,res2=0,imm;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=maxp)
        {
            maxp=arr[i];
            imm=res1;
        }
        else
        {
            res1+=(maxp-arr[i]);
        }
    }
    int maxp1=-1;
    //Check for case where overflow of water can occur.
    for(int i=n-1;i>=0 && arr[i]!=maxp;i--)
    {
        if(arr[i]>=maxp1)
        {
            maxp1=arr[i];
        }
        else
        {
            res2+=(maxp1-arr[i]);
        }
    }
    int res=min(res1,imm+res2);
    cout<<res<<endl;
    }
}
