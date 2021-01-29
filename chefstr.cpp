#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length(),res=0;
        for(int i=0;i<n;i++)
        {
            if(i!=0 && ((s[i]=='x'&&s[i-1]=='y')||(s[i]=='y'&&s[i-1]=='x')))
            {
                res++;
                s[i]=s[i-1]='0';
            }
            else if(i!=n-1 && ((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x')))
            {
                res++;
                s[i]=s[i+1]='0';
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
