#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p[n];
        long long psum=0;
        for(int i=0;i<n;i++)
            cin>>p[i];
        for(int i=n-1;i>=0;i--)
        {
            if(p[i]<=0)
            {
                psum+=(-p[i]);
            }
            else
            {
                if(psum>=p[i])
                    {psum-=p[i];p[i]=0;}
                else
                   {
                       psum=0;
                       p[i]-=psum;
                   }
            }
        }
        cout<<psum<<endl;
    }
}
