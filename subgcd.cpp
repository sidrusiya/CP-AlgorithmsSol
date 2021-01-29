#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        if(d<(99999)){
        cout<<2<<endl;
        cout<<d+2<<" "<<d+1<<endl;
        }
        else
        {
            int p=sqrt(d);
            cout<<p+1+((p*p)!=d)<<endl;
            for(int i=0;i<p;i++)
                cout<<p+2<<" ";
            cout<<p+1<<" ";
            if((p*p)!=d)
                cout<<(d-(p*p));
            cout<<endl;
        }
    }
}
