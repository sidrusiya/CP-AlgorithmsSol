#include<bits/stdc++.h>
#include<vector>
using namespace std;

const long long N=100000;

vector<long long> p(N+1);

long long sum=1;

void toitent(){
    p[0]=0;
    p[1]=0;
    for(long long i=2;i<=N;i++)
        p[i]=i;
    for(long long i=2;i<=N;i++){
        if(p[i]==i){
        for(long long j=i;j<=N;j+=i){
            p[j]-=p[j]/i;
        }
        }
        p[i]=i-p[i];
        p[i]+=p[i-1];
    }
}
/*
void poitent(){
   q[21]=12;
   pair<long long ,long long> temp1{21,12};
   for(int i=22;i<=N;i++){
       vector<int> chu(10,0);
       long long pu=i,qu=p[i];
       while(pu!=0){
          chu[pu%10]++;
          pu/=10;
       }
       while(qu!=0){
          chu[qu%10]--;
          qu/=10;
       }
       int temp=0;
       for(int i=0;i<10;i++){
          if(chu[i]!=0){
            temp=1;
            break;
          }
       }
       if(temp==1)
        q[i]=temp1.first;
       else{
            if(i*temp1.second <= p[i]*temp1.first)
			{
				temp1={i,p[i]};
			}
			q[i]=temp1.first;
       }
   }
}*/
/*
int main(){

    toitent();
      for(int i=1;i<=N;i++){
        p[i]=p[i]*p[i]+p[i-1];
      }
    ios_base::sync_with_stdio( false ); cin.tie(NULL);
    long long t,i=0;
    scanf("%lld",&t);
    long long a,b;
    while(t--){
        scanf("%lld %lld",&a,&b);
        i++;
        cout<<"Case "<<i<<": ";
        cout<<p[b]-p[a-1]<<endl;
    }
    return 0;
}
*/
int main(){
   long long t,i=0;
   cin>>t;
   toitent();
   while(t--){
      long long n;
      cin>>n;
      cout<<"Case "<<++i<<": "<<p[n]<<endl;
   }
   return 0;
}
