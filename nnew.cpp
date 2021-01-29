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
        long long res=-1;
        for(int i=1;(i*i)<n;i++)
        {
            if(n%i==0 && ((n/i)-i)%2==0)
            {
                res=(((n/i)-i)/2)*(((n/i)-i)/2);
            }
        }
        cout<<res<<endl;
    }
}
