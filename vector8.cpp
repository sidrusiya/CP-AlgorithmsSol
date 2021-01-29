#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);

template <typename T> T exp(T b, T p){T x = 1;while(p){if(p&1)x=(x*b);b=(b*b);p=p>>1;}return x;}

const int MAXN = 1e6+5;
int isPrime[MAXN];

void sieve(){
	isPrime[0] = isPrime[1] = 1;
	for(int i = 2;i*i <= 1000000; i++){
		if(isPrime[i] == 0){
			if(i*1LL*i <= 1000000){
				for(int j = i*i;j <= 1000000; j += i)
					isPrime[j] = 1;
			}
		}
	}
}

int cnt[MAXN];

bool toBeAfraid(ll num){
	ll dig = 0;
	ll tmpNum = num;
	while(num > 0){
		if(num%10 == 0)
			return false;
		dig++;
		num /= 10;
	}
	ll div = exp(10LL, dig-1);
	num = tmpNum;
	while(num > 0){
		num %= div;
		div /= 10;
		if((num != 0 && isPrime[num] == 1))
			return false;
	}
	return true;
}

void precal(){
	for(int i = 2;i <= 1000000; i++){
		cnt[i] = cnt[i-1];
		if(isPrime[i] == 0){
			if(toBeAfraid(i))
				cnt[i]++;
		}
	}
}

int main(){
    io;
    sieve();
    precal();
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cout << cnt[n] << endl;
    }
    return 0;
}
