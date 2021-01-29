#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long moduloMultiplication(long long a,
                            long long b,
                            long long mod)
{
    long long res = 0; // Initialize result

    // Update a if it is more than
    // or equal to mod
    a %= mod;

    while (b)
    {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % mod;

        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % mod;

        b >>= 1; // b = b / 2
    }

    return res;
}

long long DigitCountFactor(long long number) {
    long long factor = 1;

    while (number > 0) {
        factor *= 10;
        number /= 10;
    }

    return factor;
}

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

vector<bool> segmentedSieveNoPreGen(long long L, long long R) {
    vector<bool> isPrime(R - L + 1, true);
    long long lim = sqrt(R);
    for (long long i = 2; i <= lim; ++i)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        vector<bool> isPrime=segmentedSieveNoPreGen(l,r+100);
        vector<long long> pot;
        for(int i=l;i<=r+100;i++){
            if(isPrime[i-l])
               pot.push_back(i);
        }
        long long result=0;
        for(int i=0;pot[i]<=r;i++){
            long long p1 = pot[i];
            long long p2 = pot[i + 1];

            long long a = DigitCountFactor(p1);
            long long b = p2 - p1;
            long long n = p2;

            long long u,v;
            long long p=gcd(a,n,u,v);
            long long x  = moduloMultiplication(u,b,n);

            if (x < 0)
                x = n + x;

            result += x * a + p1;
        }
        cout<<result<<endl;
    }
    return 0;
}
