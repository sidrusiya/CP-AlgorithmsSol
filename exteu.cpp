#include <iostream>
#define PII pair<ll,ll>
typedef long long ll;
using namespace std;
const ll EPS=1e9+7;
PII fib (ll n) {
    if (n == 0)
        return {0, 1};
   PII p=fib(n >> 1);
   ll c=((p.first%EPS)*(((p.second%EPS)+(p.second%EPS-p.first%EPS+EPS)%EPS)%EPS))%EPS;
   ll d=(((((p.second-p.first)%EPS)*((p.second-p.first)%EPS))%EPS)+((2*(((p.first%EPS)*(p.second%EPS))%EPS))%EPS))%EPS;
   if(n&1)
   return {d,(c+d)%EPS};
   else
   return{c,d};
}

int main(){
    ll t,N;
    cin>>t;
    while(t--){
       cin>>N;
       if(N==0)
        cout<<0<<endl;
       else if(N==1)
        cout<<2<<endl;
       else{
       PII p=fib(N+1);
       cout<<((p.first%EPS)+(p.second%EPS))%EPS<<endl;

       }
    }
    return 0;
}
