#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n=10000000;
vector<char> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n],res;
        for(int i=4;i<100000;i+=2)
        {
            res=i;
            if(is_prime[i*(n-1)+1])
                break;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                a[i][j]=res;
            a[i][i]=1;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
}
