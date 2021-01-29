#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);

/*    long N = 100000000;
    vector<long> lp(N+1,0);
    vector<long> pr;
    int x=1,y=0;
    vector<int> hug;
    vector<int> mug;

void sieve(){
     for (long i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
            if(y<x)
                y++;
            else if(y==x){
                x++;
                y=1;
            }
        }
        for (long j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];

        hug.push_back(x);
        mug.push_back(y);

    }
}*/

const long int MAXN = 1e8+5;
bool isPrime[MAXN];
int x=1,y=0;
int hug[MAXN];
int mug[MAXN];

void sieve(){
	isPrime[0] = isPrime[1] = true;
	hug[0]=hug[1]=mug[0]=mug[1]=0;
	for(long int i = 2;i*i <= 100000000; i++){
		if(isPrime[i] == false){
			if(i*1LL*i <= 100000000){
				for(long int j = i*i;j <= 100000000; j += i)
					isPrime[j] = true;
			}
			if(y<x)
                y++;
            else if(y==x){
                x++;
                y=1;
            }
		}
		hug[i]=x;
		mug[i]=y;
	}
}
int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    sieve();

    int t;
    scanf("%d",&t);
    while(t--){
        long n;
        scanf("%ld",&n);
        if(!isPrime[n])
            printf("%d %d\n",hug[n],mug[n]);
        else
            printf("-1\n");
    }
    return 0;
}


