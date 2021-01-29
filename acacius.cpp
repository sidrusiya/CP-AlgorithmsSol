#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        string s;
        cin>>s;
        string p="abacaba";
        int pa=0,qa=0,hj=-1;
        for(int i=0;i<=n-7;i++)
        {
            int x=0,y=0;
            for(int j=0;j<7 && y==0;j++)
            {
                if(s[i+j]==p[j])
                {
                }
                else if(s[i+j]=='?')
                {
                   x=1;
                }
                else
                {
                  x=-1;y=1;
                }
            }
            if(x==0)
                pa++;
            if(x==1)
                qa++;
            if(qa==1 && x==1)
            {
                hj=i;
            }
        }
        if(pa==0 && qa>=1)
        {
              cout<<"Yes"<<endl;
              int y=0;
              if(hj!=-1)
              {
                  for(int j=0;j<7;j++)
                    s[hj+j]=p[j];
              }
              for(int i=0;i<n;i++)
              {
                  if(s[i]=='?')
                  {
                     cout<<"d";
                  }
                  else
                     cout<<s[i];
              }
              cout<<endl;
        }
        else if(pa==1 && qa>=0)
        {
            cout<<"Yes"<<endl;
            for(int i=0;i<n;i++)
              {
                  if(s[i]=='?')
                  {
                     cout<<"d";
                  }
                  else
                     cout<<s[i];
              }
              cout<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}
