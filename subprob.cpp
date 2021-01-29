#include<bits/stdc++.h>
using namespace std;

long long p_pow1=1;

long long gcd(long long a, long long b, long long& x, long long& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow1=p_pow;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}



signed main()
{
    string M;
    cin>>M;
    int N;
    cin>>N;
    while(N--)
    {
        string NS;
        cin>>NS;
        int n=NS.length();
            long long hash_value1 = compute_hash(NS);
            long long hash_value2 = compute_hash(M.substr(0,n));
            int x=0;
            if(hash_value1==hash_value2)
            {
               cout<<'Y'<<endl;
               x=1;
            }
            long long x0,y0;
            const long long p = 31;
            const long long m = 1e9 + 9;
            int pipi=gcd(p,m,x0,y0);
            for(int i=n;i<M.length()&&x==0;i++)
            {
                hash_value2 = ((hash_value2 - ((M[i-n] - 'a' + 1)%m))%m);
                hash_value2 = (hash_value2*((x0+m)%m))%m;
                hash_value2 = (hash_value2 + (p_pow1*(M[i] - 'a' + 1))%m)%m;
                if(hash_value1==hash_value2)
                {
                    cout<<'Y'<<endl;
                    x=1;
                }
            }
            if(x==0)
                cout<<'N'<<endl;
    }
}
