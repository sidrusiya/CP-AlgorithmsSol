#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[26]={0},b[26]={0},n=s.length(),p=1;
        for(int i=0;i<n/2;i++)
        {
            a[s[i]-97]++;
            b[s[n-1-i]-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                p=0;break;
            }
        }
        if(p)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
