#include<bits/stdc++.h>
#include<vector>
using namespace std;

const long long N=1000000;

vector<long long> p(N+1),q(N+1,0);

void toitent(){
    p[0]=0;
    p[1]=1;
    for(long long i=2;i<=N;i++)
        p[i]=i;
    for(long long i=2;i<=N;i++){
        if(p[i]==i){
        for(long long j=i;j<=N;j+=i){
            p[j]-=p[j]/i;
        }
        }
    }
}

void soitent(){
     for(long long i=2;i<=N;i++){
        for(long long j=i;j<=N;j+=i){
            q[j]+=(j/i)*p[i];
        }
     }
}

int main(){
  toitent();
  soitent();
  for(int i=1;i<=N;i++){
    q[i]+=q[i-1];
  }
  while(1){
      int n;
      scanf("%d",&n);
      if(n==0)
        break;
      cout<<q[n]<<endl;
  }
  return 0;
}
