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
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int x=1;
        sort(a.begin(),a.end());
        if(a.front()==a.back())
            x=n;
        cout<<x<<endl;
    }
}
