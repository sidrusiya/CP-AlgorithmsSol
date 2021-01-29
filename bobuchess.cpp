#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,m,x,y,p=0;
    cin>>n>>m>>x>>y;
    cout<<x<<" "<<y<<endl;
    for(int i=0;i<m;i++)
    {
        if(i!=(y-1))
            cout<<x<<" "<<i+1<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(i!=(x-1)){
        for(int j=0;j<m;j++)
        {
            if(p%2==0)
                cout<<i+1<<" "<<(m-j)<<endl;
            else
                cout<<i+1<<" "<<j+1<<endl;
        }
        p++;
        }
    }
}
