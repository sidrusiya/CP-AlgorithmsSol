#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m],g[n]={0},h[m]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    g[i]=1;
                    h[j]=1;
                }
            }
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
            if(g[i]==0)
               cnt1++;

        for(int i=0;i<m;i++)
            if(h[i]==0)
               cnt2++;

        int cnt=min(cnt1,cnt2);
        if(cnt%2==0)
            cout<<"Vivek"<<endl;
        else
            cout<<"Ashish"<<endl;
    }
    return 0;
}
