#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        n--;m--;
        if((n%x==0 && m%y==0)||(n%x==1 && m%y==1))
        {
           cout<<"Chefirnemo"<<endl;
        }
        else if((n%x==1 || m%y==1) && ((n>=1 && x==1)||(m>=1 && y==1)))
        {
            cout<<"Chefirnemo"<<endl;
        }
        else
        {
            cout<<"Pofik"<<endl;
        }
    }
}
