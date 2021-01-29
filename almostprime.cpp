#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n=100000;
   long long isPrime[n+1]={0};
   isPrime[0] = isPrime[1] = 1;
   long long sum=0;
   for(long long i = 2;i <= n; i++){
		if(isPrime[i] == 0){
				for(long long j = i+i;j <= n; j += i)
					isPrime[j]++;
		}
	}
	for(long long i=0;i<=n;i++){
        if(isPrime[i]==2)
            sum++;
	}
    cout<<sum<<endl;
    return 0;
}
