#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<a[2]<<endl;
    }
}
