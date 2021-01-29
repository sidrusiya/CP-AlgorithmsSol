#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        if((r%2==0 && b%2==0 && g%2==0)||(r%2!=0 && b%2!=0 && g%2!=0))
        {
            cout<<"Yes"<<endl;
        }
        else if((r%2==0 && b%2==0) || (r%2==0 && g%2==0) || (g%2==0 && b%2==0))
        {
            if(w%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            if((g!=0 &&b!=0 && r!=0) && w%2!=0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}
