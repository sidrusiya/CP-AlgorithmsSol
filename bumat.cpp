#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int a[5][5];
    int res=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j])
                res=abs(2-i)+abs(2-j);
        }
    }
    cout<<res<<endl;
}
