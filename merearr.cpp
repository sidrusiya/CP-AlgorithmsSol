#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

signed main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n,mi=INT_MAX,p=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
           if(mi > arr[i])
                mi=arr[i];
        }
        vector<int> a=arr;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=a[i])
            {
                int x =  gcd(arr[i],a[i]);
                if(x%mi!=0 && x/mi!=1)
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
