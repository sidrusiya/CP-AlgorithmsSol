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
        string s[n];
        int a[26]={0};
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<s[i].length();j++)
            {
                a[s[i][j]-97]++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if((a[i]%n)!=0)
            {
                p=1;break;
            }
        }
        if(p==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
