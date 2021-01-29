#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,x,k;
    cin>>n>>x>>k;
    int a[n];
    vector<bool> res(n,false);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==x)
        {
            for(int j=(i+1-k)>=0?(i+1-k):0;j<n && j<(i+k);j++)
                res[j]=true;
        }
    }
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(!res[i])
        {
           p=1;break;
        }
    }
    if(!p)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
