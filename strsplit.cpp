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
        string s;
        cin>>s;
        int p=0;
        for(int i=0;i<(n-1);i++)
        {
            if(s[i]==s[n-1])
            {
                p=1;break;
            }
        }
        if(p)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
