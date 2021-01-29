#include<bits/stdc++.h>
#define int long long
using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
signed main(){
     int t;
     cin>>t;
     int a,b;
     while(t--){
        cin>>a>>b;
        if(gcd(a,b)==1)
         cout<<(a*b-a-b+1);
        else
          cout<<-1;
     }
     return 0;
}
