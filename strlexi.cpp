#include<bits/stdc++.h>
using namespace std;

signed main()
{
    string s1,s2;
    cin>>s1>>s2;
    int res=0;
    if(s1.length()>s2.length())
    {
        res=1;
    }
    else if(s1.length()<s2.length())
    {
        res=-1;
    }
    else
    {
        for(int i=0;i<s1.length();i++)
        {
            if(tolower(s1[i])>tolower(s2[i]))
               {
                 res=1;break;
               }
            else if(tolower(s1[i])<tolower(s2[i]))
               {
                 res=-1;break;
               }
        }
    }
    cout<<res<<endl;
}
