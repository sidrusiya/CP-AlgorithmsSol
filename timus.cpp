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

int main(){
   while(1){
   long long k;
   cin>>k;
   int l=0;
   if(k==1 || k==0){
    cout<<k<<endl;
    return 0;
   }
   long long x=k+1,y;

       long long c=k,b=0;
       while(c!=1){
           c=phi(c);
           b++;
       }
       y=2*pow(3,b);
/*
   else{
    y=((long double)k/(pow(2.713,0.577)*log10(log10(k))))+((long double)3/log10(log10(k)));
   }*/
   for(long long i=x;i<=y;i++){
       if(phi(i)==k){
        cout<<i<<endl;
        l=1;
        break;
       }
   }
   if(l==0){
     cout<<0<<endl;
   }}
   return 0;
}
