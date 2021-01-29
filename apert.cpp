#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0;
        cin>>n;
        for(int i=(n/7);i>=0;i--)
        {
            int k=n-(7*i);
            for(int j=(k/5);j>=0;j--)
            {
                int l=k-(5*j);
                if((l%3)==0)
                {
                    cout<<l/3<<" "<<j<<" "<<i<<endl;
                    p=1;break;
                }
            }
            if(p)
                break;
        }
        if(p==0)
            cout<<-1<<endl;
    }
}
