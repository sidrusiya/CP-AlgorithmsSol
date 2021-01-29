#include <iostream>
#define PII pair<ll,ll>
typedef long long ll;
using namespace std;
const ll EPS=1e9+7;
PII fib (ll n) {
    if (n == 0)
        return {0, 1};
   PII p=fib(n >> 1);
   ll c=((p.first%EPS)*(((p.second%EPS)+(p.second-p.first)%EPS)%EPS))%EPS;
   ll d=(((((p.second-p.first)%EPS)*((p.second-p.first)%EPS))%EPS)+((2*(((p.first%EPS)*(p.second%EPS))%EPS))%EPS))%EPS;
   if(n&1)
   return {d,(c+d)%EPS};
   else
   return{c,d};
}
int main(){
    long long t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        PII p=fib(n);
        ll sum=(p.first)%EPS;
        for(ll i=0;i<(m-n);i++){
            sum=((sum%EPS)+(p.second%EPS))%EPS;
            ll temp=((p.first%EPS)+(p.second%EPS))%EPS;
            p.first=p.second;
            p.second=temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}
