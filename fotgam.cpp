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
        int x1=0,x2=0,p=2*n;
        for(int i=0;i<(2*n);i++)
        {
            if(i%2==0 && s[i]=='1')
                x1++;
            else if(i%2!=0 && s[i]=='1')
                x2++;
            if(x1>(x2+(n-((i+1)/2))))
            {
               p=i+1; break;
            }
            if(x2>(x1+((n-1)-(i/2))))
            {
                p=i+1;break;
            }
        }
         cout<<p<<endl;
    }
}
