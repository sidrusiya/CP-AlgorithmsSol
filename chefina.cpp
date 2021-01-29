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
        int a[n][m];
        map<int,int> ma;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                ma[a[i][j]]++;
            }
        }
        int x=0,y=0,k=0,j=0,l=0;
        if(m%2==0)
            k=1;
        for(auto i: ma)
        {
            if(i.second%2!=0)
            {
                if((k==1)||(j==n))
                {
                    l=1;
                    break;
                }
                a[j++][m/2]=i.first;
                i.second--;
            }

                int oq=0;
                while(oq<i.second && y<m/2)
                {
                    a[x][y]=i.first;
                    a[x++][m-1-y]=i.first;
                    oq+=2;
                    if(x==n)
                    {
                        x=0;y++;
                    }
                }
                while(j<n && oq<i.second && y==m/2)
                {
                    a[j++][m/2]=i.first;
                    oq++;
                }
                if(y==m/2 && j==n && oq<i.second)
                {
                    l=1;
                    break;
                }
        }
        if(l==1)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
