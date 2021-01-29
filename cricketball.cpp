#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        int x=(n/k);
        if(n%k)
            x++;
        if(x>l)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(k==1 && x>1)
                cout<<-1<<endl;
            else
            {
                int xi=1;
                for(int i=0;i<n;i++)
                {
                   cout<<xi<<" ";
                   if(xi==k)
                      xi=0;
                   xi++;
                }
                cout<<endl;
            }
        }
    }
}
