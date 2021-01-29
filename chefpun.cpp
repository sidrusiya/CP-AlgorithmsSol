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
        int a;
        vector<int> b(10,0);
        for(int i=0;i<n;i++)
        {
            cin>>a;
            b[a-1]++;
        }
        sort(b.begin(),b.end());
        int k=1,maxp=0,x;
        for(int i=1;i<10;i++)
        {
            if(b[i]==0)
                continue;
            if(b[i]==b[i-1])
            {
                k++;
            }
            else
            {
                if(k>maxp && b[i-1]!=0)
                 {
                     maxp=k;x=b[i-1];
                 }
                 k=1;
            }
        }
        if(k>maxp)
        {
            maxp=k;
            x=b[9];
        }
        cout<<x<<endl;
    }
}

