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
        vector<int> v;
        int len=0;
        for(int i=0;i<s.length();i++)
        {
            if(i!=0 && s[i]=='0' && s[i-1]=='1')
            {
                v.push_back(len);
                len=0;
            }
            if(s[i]=='1')
                len++;
        }
        v.push_back(len);
        sort(v.begin(),v.end());
        int n=v.size(),score=0;
        for(int i=n-1;i>=0;i--)
        {
           if((n-1-i)%2==0)
           score+=v[i];
        }
        cout<<score<<endl;
    }
}
