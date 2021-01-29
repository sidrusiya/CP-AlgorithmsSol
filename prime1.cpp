#include<bits/stdc++.h>
#include<vector>
using namespace std;

const int N = sqrtl(2147483647);
int lp[N+1];
vector<int> pr;
void sieve(){

for (int i=2; i<=N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        lp[i * pr[j]] = pr[j];
}
}

vector<bool> segmentedSieve(long long L, long long R) {
    // generate all primes up to sqrt(R)
    long long lim = sqrtl(R);
    vector<bool> isPrime(R - L + 1, true);
    for (long long k=0;k<pr.size() && pr[k]<=lim;k++){
        long long i=pr[k];
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    }
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}

int main(){
    sieve();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d",&t);
    long long n,m;
    while(t--){
        scanf("%lld %lld",&m,&n);
        vector<bool> isPrime=segmentedSieve(m,n);
        for(long long i=0;i<isPrime.size();i++){
            if(isPrime[i])
                printf("%d\n",i+m);
        }
    }
    return 0;
}
