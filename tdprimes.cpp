#include<bits/stdc++.h>
using namespace std;
#include<vector>
void count_primes(long long n) {
    const long long S = 30000;

    vector<long long> primes;
    long long nsqrt = sqrtl(n);
    vector<char> is_prime(nsqrt + 1, true);
    for (long long i = 2; i <= nsqrt; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = i * i; j <= nsqrt; j += i)
                is_prime[j] = false;
        }
    }
    long long t=0;
    vector<char> block(S);
    for (long long k = 0; k * S <= n; k++) {
        fill(block.begin(), block.end(), true);
        long long start = k * S;
        for (long long p : primes) {
            long long start_idx = (start + p - 1) / p;
            long long j = max(start_idx, p) * p - start;
            for (; j < S; j += p)
                block[j] = false;
        }
        if (k == 0)
            block[0] = block[1] = false;
        for (int i = 0; i < S && start + i <= n; i++) {
            if (block[i]){
                if(!(t%500))
                  cout<<start+i<<endl;
                t++;
            }
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 /* long long n=100000000,i,j;
  vector<bool> v(n+1,true);
  vector<long long> car;
  v[0]=v[1]=false;
   for(i=4;i<=n;i+=2)
     v[i]=false;
      for(i=3;i*i<=n;i+=2)
     {
           if(v[i])
             {
                for(j=i*i;j<=n;j=j+(2*i))
                v[j] = false;
             }
     }
       j=0;
       car.push_back(2);
       for(i=3;i<=n;i+=2)
      {
        if(v[i])
        car.push_back(i);
      }

for(int i=1;i<=car.size();i+=500)
    cout<<car[i-1]<<"\n";*/
    long long n=1000000000;
    count_primes(n);
return 0;
}
