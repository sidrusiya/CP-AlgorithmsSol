#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAXN = 1e7+5;
int isPrime[MAXN];

void sieve(){
	isPrime[0] = isPrime[1] = 1;
	for(int i = 2;i*i <= 10000000; i++){
		if(isPrime[i] == 0){
			if(i*1LL*i <= 10000000){
				for(int j = i*i;j <= 10000000; j += i)
					isPrime[j] = 1;
			}
		}
	}
}

int cnt[MAXN];

int sq[MAXN];

int raiders(int n){
    for(int i=1;i*i*i*i<=n;i++){
        if(sq[n-i*i*i*i])
            return 1;
     }
     return 0;
}

void coint(){
    for(int i=1;i*i<=MAXN;i++){
        sq[i*i]=1;
    }
    for(int i=2;i<=10000000;i++){
        cnt[i]=cnt[i-1];
        if((!isPrime[i]) && (raiders(i))){
           cnt[i]++;
        }
    }

}

int main(){
    io;

    sieve();

    coint();

    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        cout<<cnt[n]<<endl;
    }
    return 0;
}
