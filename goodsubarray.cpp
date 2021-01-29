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
        vector<int> v(n);
        v[0]=s[0]-49;
        long long c=1,maxl=0;
        for(int i=1;i<n;i++)
        {
           v[i]= v[i-1] + (s[i]-49) ;
        }
        sort(v.begin(),v.end());
        if(v[0]==0)
            maxl++;
        for(int i=1;i<n;i++)
        {
            if(v[i]==0)
                maxl++;
            if(v[i]==v[i-1])
                c++;
            else
            {
               maxl+=(c*(c-1))/2;
               c=1;
            }
        }
        maxl+=(c*(c-1))/2;
        cout<<maxl<<endl;
    }
}
