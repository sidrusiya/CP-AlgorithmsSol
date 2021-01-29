#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        string s="";
        while(a)
        {
            s+='0'+(a&1);
            a>>=1;
        }
        for(int i=s.length()-1;i>=0;i--)
            cout<<s[i];
            cout<<endl;
    }
}
