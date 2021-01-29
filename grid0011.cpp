#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<vector<int>> a(n,vector<int>(n,0));
        int i=0,j=0,p=0,x=k;
        while(k--)
        {
            a[i][j]=1;
            if(i<n-1 && j<n-1 && (p%2)==0)
            {
                i++;j++;
            }
            else if(i>0 && j>0 && (p%2)!=0)
            {
                i--;j--;
            }
            else
            {
                int temp=i;i=j;j=temp;
                if(p%2==0)
                    j--;
                p++;
            }
        }
        if(x%n==0)
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j];
            cout<<endl;
        }

    }
}
