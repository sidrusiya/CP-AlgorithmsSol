#include<bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    cin>>s;
    int n=s.length();
    int k=0;
    for(int i=0;i<n-2;i++)
    {
        if(s[i]==s[i+2])
           {k=i+2;break;}
    }
    if(k!=0)
      n=n+(k);
    if(s[0]==s[2]||s[k]==s[k-2])
    {
        cout<<2+(k!=0)<<endl;
        if(k!=0)
          cout<<"L"<<" "<<k+1<<endl;
        cout<<"R"<<" "<<2<<endl;
        cout<<"R"<<" "<<(2*n-3)<<endl;
    }
    else
    {
         cout<<0<<endl;
    }
}
