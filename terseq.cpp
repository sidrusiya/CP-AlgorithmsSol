#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        long long x1,y1,z1,x2,y2,z2,res=0;
        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;
        if(z1>0 && y2>0){
        if(z1>=y2)
        {
            res=res + (2*(y2));
            y2=0;
            z1=z1-y2;
        }
        else
        {
           res+=(2*(z1));
           z1=0;
           y2=y2-z1;
        }
        }
        y1 = y1 - y2;
        y1 = y1 - x2;
        if(y1>0){
            res=res - (2*(y1));
            z2=z2-y1;
            y1=0;
        }
        cout<<res<<endl;
    }
}
