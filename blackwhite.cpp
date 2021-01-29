#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){ if(a.first==b.first) return a.second<b.second; return a.first<b.first;}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],p[n]={0};
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<pair<int,int>> res;
        int po=0;
        for(int i=0;i<n;i++)
        {
            if(k%2==0)
            {
                if(a[i]<(k/2))
                    p[i]=1;
                if(a[i]==(k/2))
                    p[i]=(po++)%2;
            }
            else
            {
                if(a[i]<=(k/2))
                    p[i]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
}
