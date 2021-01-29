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
        string s,res="";
        cin>>s;
        for(int i=0;i<n;i++)
        {
            res+=s[2*i];
        }
        cout<<res<<endl;
    }
}
