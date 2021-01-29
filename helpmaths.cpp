#include<bits/stdc++.h>
using namespace std;

signed main()
{
    string s,res="";
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.length();i+=2)
    {
        if(s[i]=='1')
            a++;
        if(s[i]=='2')
            b++;
        if(s[i]=='3')
            c++;
    }
    while(a--)
    {
        if(res!="")
            res+='+';
        res+='1';
    }
    while(b--)
    {
        if(res!="")
            res+='+';
        res+='2';
    }
    while(c--)
    {
        if(res!="")
            res+='+';
        res+='3';
    }
    cout<<res<<endl;
}
