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
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        vector<int> q;
        q.push_back(p[0]);
        int diff=p[1]-p[0];
        for(int i=1;i<n-1;i++)
        {
            if((diff>=0 ^ (p[i+1]-p[i])>=0))
            {
                q.push_back(p[i]);
                diff=p[i+1]-p[i];
            }
        }
        q.push_back(p[n-1]);
        cout<<q.size()<<endl;
        for(int i=0;i<q.size();i++)
            cout<<q[i]<<" ";
        cout<<endl;
    }
}
