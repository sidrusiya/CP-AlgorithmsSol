#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        int p=0;
        if(a>=b)
        {
            while(a!=b && a!=0)
            {
                if(a&1==1)
                {
                    a=0;
                    break;
                }
                a=a>>1;
                p++;
            }
            if(a==0)
                p=-1;
            else
            {
                int res = p/3;
                p=p%3;
                res+=p/2;
                p=p%2;
                res+=p;
                p=res;
            }
        }
        else
        {
            while(a!=b && a<=b)
            {
                a=a<<1;
                p++;
            }
            if(a>b)
                p=-1;
            else
            {
                int res = p/3;
                p=p%3;
                res+=p/2;
                p=p%2;
                res+=p;
                p=res;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}
