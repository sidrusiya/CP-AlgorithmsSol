#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        char a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int cost=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]=='.'){
                if(y<2*x && j!=m-1 && a[i][j+1]=='.')
                {
                    cost+=y;
                    j++;
                }
                else
                {
                    cost+=x;
                }
                }
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}
