#include<iostream>
using namespace std;
long long mulmod(long long a,long long b,long long c)
{
    long long x = 0 , y = a%c ;
    while(b>0)
    {
        if(b%2) x = (x+y)%c ;
        y=(y*2)%c;
        b/=2;
    }
    return x%c ;
}
long long binpower(long long base, long long e, long long mod) {
    long long result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (mulmod(result,base,mod))% mod;
        base = mulmod(base, base,mod) % mod;
        e >>= 1;
    }
    return result%mod;
}

bool check_composite(long long n, long long a, long long d, int s) {
    long long x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = mulmod(x, x, n) % n;
        if (x == n - 1)
            return false;
    }
    return true;
}
bool MR(long long n){
    if(n==2)return true;
    if(n<2 || n%2==0)return false;
    int r=0;
    long long d=n-1;
    while(d&1==0){
        d>>=1;
        r++;
    }
    for (int i = 0; i < 50; i++) {
        int a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}
int main(){
   int t;
   cin>>t;
   long long n;
   while(t--){
      cin>>n;
      if(MR(n)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }
   return 0;
}
