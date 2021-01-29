#include<iostream>
using namespace std;
long long gcd(long long A,long long B){
    if(B==0) return A;
    else return gcd(B,A%B);
}
int main(){
    int t;
    cin>>t;
    long long A,B,res;
    while(t--){
        cin>>A>>B;
        if(A<B)swap(A,B);
        res=gcd(A,B);
        cout<<res<<" "<<(A/res)*B<<endl;
    }
}
