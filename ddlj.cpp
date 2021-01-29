#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool saddy(pair<int,int> a,pair<int,int> b){
    if(a.first<b.first)
        return true;
    else if(a.first>b.first)
        return false;
    else{
        if(a.second<b.second)
            return true;
        else
            return false;
    }
}
int main(){
    long long n= 2000000;
    vector<pair<int,int>> is_prime(n+1);
    for(int i=0;i<=n;i++){
        is_prime[i].first=1;
        is_prime[i].second=i;
    }
    is_prime[0].first=is_prime[1].first=0;
    for (int i = 2; i <= n; i++) {
      if (is_prime[i].first && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j].first = 0;
      }
    }
    vector<int> primes;
    for(int i=2;i<=n;i++){
        if(is_prime[i].first)
           primes.push_back(i);
    }
    for(int i=2;i<=n;i++){
        if(!is_prime[i].first){
            for(int j=0;j<primes.size() && primes[j]<=i;j++){
                if(i%primes[j]==0){
                    is_prime[i].first=is_prime[primes[j]].first+is_prime[i/primes[j]].first;
                    break;
                }
            }
        }
    }
    sort(is_prime.begin(),is_prime.end(),saddy);
    int i=0;
    while(1){
       int n;
       cin>>n;
       if(n==0)
          break;
       cout<<"Case "<<++i<<": "<<is_prime[n].second<<endl;
    }
}
