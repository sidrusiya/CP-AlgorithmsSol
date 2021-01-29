#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,z;
        cin>>n>>z;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        make_heap(a.begin(),a.end());
        int x=0;
        while(a.size()>0 && z>=0)
        {
            pop_heap(a.begin(),a.end());
            int h=a.back();
            z-=h;
            a.pop_back();
            h/=2;
            if(h>0)
            {
                a.push_back(h);
                push_heap(a.begin(),a.end());
            }
            x++;
        }
        cout<<x<<endl;
    }
}
