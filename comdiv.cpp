#include<bits/stdc++.h>
#include<vector>
using namespace std;

int gcd(int A,int B){
     if(B==0)
        return A;
     return gcd(B,A%B);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int N;
    while(t--){
        cin>>N;
        long long sum=1;
        int i;
        for(i=2;i*i<=N;i++){
            if(N%i==0){
                sum+=i;
                sum+=N/i;
            }
        }
        i=i-1;

        if(i*i==N)
            sum-=i;

        printf("%lld\n",sum);
    }
    return 0;
}
