#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
         cin>>m>>n;
         long long res=m*(n/2);
         if(n%2==1)
         {
            res+=m/2;
            if(m%2==1)
            {
                res+=1;
            }
         }
         cout<<res<<endl;
    }
    return 0;
}
