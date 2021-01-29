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
    string S;
    cin>>S;
    long long a[S.length()];
    int Q;
    cin>>Q;
    while(Q--)
    {

    }
}
