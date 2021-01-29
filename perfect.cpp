#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a;
        cin>>a;
        long long sum=0;
        for(long long i=1;(i*i)<=a && i!=a;i++)
        {
            if(a%i == 0)
            {
                if(i == (a/i) || i==1)
                  sum+=i;
                else
                {
                    sum+=i;
                    sum+=(a/i);
                }
            }
        }
        if(sum==a)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

