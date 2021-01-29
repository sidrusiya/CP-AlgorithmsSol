#include<iostream>
using namespace std;
long long modex(long long a,long long b,long long n){
     a=a%n;
     if(b==0)
        return 1;
     long long res=modex(a,b/2,n);
     if(b%2==0)
        return ((res%n)*(res%n))%n;
     else
        return (((res%n)*(res%n))%n*(a%n))%n;
}
int main(){
    long long x,a,n,c;
    while(1){
        cin>>x>>a>>n>>c;
        if(x==0 && a==0 && n==0 && c==0)
            break;
        long long res1=modex(a,n,c);
        long long res2=((x%c)*(res1%c))%c;
        long long s=((a%c)*((res1-1+c)%c))%c;
        long long t=(modex(a-1,c-2,c))%c;
        long long res3=((s%c)*(t%c))%c;
        long long res=(res2%c-res3%c+c)%c;
        cout<<res<<endl;
    }
    return 0;
}
