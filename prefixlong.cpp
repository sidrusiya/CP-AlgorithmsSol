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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        string s[n+1];
        s[0]="";
        for(int i=0;i<=a[0];i++)
        {s[0]+=('a'+(rand()%26));}
        s[1]=s[0].substr(0,a[0]);
        s[1]+=('a'+((s[0][a[0]]-'a'+1)%26));
        for(int i=1;i<n;i++)
        {
           s[i+1]="";
           if(a[i]>=a[i-1])
           {
               for(int j=0;j<(a[i]-a[i-1]);j++)
                  s[i]+=('a'+(rand()%26));
              s[i+1]=s[i].substr(0,a[i]);
              s[i+1]+=('a'+((s[i][a[i]]-'a'+1)%26));
           }
           else
           {
              s[i+1]=s[i].substr(0,a[i]);
              s[i+1]+=('a'+((s[i][a[i]]-'a'+1)%26));
           }
        }
        for(int i=0;i<=n;i++)
            cout<<s[i]<<endl;
    }
}
