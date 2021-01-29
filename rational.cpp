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

const int N=200000;

vector<int> p(N+1);

void toitent(int k){
    p[0]=1;
    p[1]=1;
    for(int i=2;i<=N;i++)
        p[i]=i;
    for(int i=2;i<=N;i++){
        if(p[i]==i){
        for(int j=i;j<=N;j+=i){
            p[j]-=p[j]/i;
        }
        }
    }
}

int main(){
    toitent();
   while(1){
       long long k,result=0;
       cin>>k;
       if(k==1){
           cout<<"0/1"<<endl;
       }
       else if(k==2){
            cout<<"1/2"<<endl;
       }
       for(int i=0;i<200000;i++){
           result+=p[i];
           if(k>=result && k<result+p[i+1])
              break;
       }

   }
}
