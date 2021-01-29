#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        int ev=0,od=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
                od++;
            else
                ev++;
        }
        int jes = (x/2);
        if(od<=jes)
        {
            cout<<"Jesse"<<endl;
        }
        else
        {
            if(x%2)
            {
                if(ev<=jes)
                {
                    od=od-(x-ev);
                    if(od%2)
                        cout<<"Walter"<<endl;
                    else
                        cout<<"Jesse"<<endl;
                }
                else
                {
                    cout<<"Jesse"<<endl;
                }
            }
            else
            {
                if(ev<=jes)
                {
                    od=od-(x-ev);
                    if(od%2)
                        cout<<"Walter"<<endl;
                    else
                        cout<<"Jesse"<<endl;
                }
                else
                {
                    cout<<"Walter"<<endl;
                }
            }
        }
    }
}
