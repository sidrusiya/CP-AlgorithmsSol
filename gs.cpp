#include<bits/stdc++.h>
#include<vector>
using namespace std;

long long phi(long long n) {
    long long result = n;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

const long long n=1000000001;

vector<char> is_prime(n+1, true);

void sieve(){
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
}

int main(){
    int N,Q;
    cin>>N>>Q;
   // sieve();
    vector<int> p;
    for(int i=0;i<N;i++){
        long long x;
        cin>>x;
        p.push_back(x);
    }
    while(Q--){
        int l,r,res=0;
        cin>>l>>r;
        for(int i=l-1;i<r;i++){
            if(is_prime[p[i]])
                res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
