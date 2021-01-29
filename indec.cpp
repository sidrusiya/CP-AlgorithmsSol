#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=1,st=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<int> b,c;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
               if(p>2)
               {
                   st=1;
                   break;
               }
               else if(p==2)
               {
                   b.push_back(a[i-1]);
                   c.push_back(a[i-1]);
               }
               else
                  b.push_back(a[i-1]);
               p=1;
            }
            else
                p++;
        }
        if(st==0 && p!=1)
            st=1;
        if(st==0 && p==1)
            b.push_back(a[n-1]);
        if(st==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            sort(b.begin(),b.end());
            sort(c.begin(),c.end());
            for(int i=0;i<b.size();i++)
                cout<<b[i]<<" ";
            for(int i=c.size()-1;i>=0;i--)
                cout<<c[i]<<" ";
            cout<<endl;
        }
    }
}
