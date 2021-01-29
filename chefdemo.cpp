#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long S,N;
        cin>>S>>N;
        long long p=0;
        if(S%2!=0)
        {
            p++;S--;
        }
        p+=S/N;
        if(S%N!=0)
        {
            p++;
        }
        cout<<p<<endl;
    }
}
