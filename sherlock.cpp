#include<bits/stdc++.h>
using namespace std;

const int n=1e6+5;
int isPrime[n]={1};

int main(){

	for(int i = 2;i*i <= 1000000; i++){
		if(isPrime[i] == 1){
			if(i*1LL*i <= 1000000){
				for(int j = i*i;j <= 1000000; j += i){
					isPrime[j]=0;
				}
			}
		}
	}

	/*for(int i = 2;i*i <= 1000000; i++){
		if(isPrime[i] == 0){
			if(i*1LL*i <= 1000000){
				for(int j = i*i;j <= 1000000; j += i){
					isPrime[j]=1;
				}
			}
		}
	}*/

	int t;
	cin>>t;
	int a,b,N;
	while(t--){
       cin>>a>>b>>N;
       int sum=0;
       for(int i=a;i<=b;i++){
         if(isPrime[i]==N)
              sum++;
       }
       cout<<sum<<endl;
	}
	/*if(k==0)
        cout<<1<<endl;
    else
        cout<<2<<endl;
    for(int i=2;i<=n+1;i++){
        if(!isPrime[i])
            cout<<1<<" ";
        else
            cout<<2<<" ";
    }
    cout<<endl;*/
    return 0;
}
