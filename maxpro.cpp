#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    long long maxp=0;
    for(int i=0;i<n;i++)
    {
        long long x=((long long)a[i])*((long long)(n-i));
        if(x>maxp)
            maxp=x;
    }
    cout<<maxp<<endl;
}
