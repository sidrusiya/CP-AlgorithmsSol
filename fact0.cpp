#include<bits/stdc++.h>
#include<vector>
using namespace std;

const long long N=100000000;

void mult(vector<int> &vfx,long long n){
     long long carry=0;
     for(int i=0;i<vfx.size();i++){
        int p=((vfx[i]*n)+carry)%10;
        carry=((vfx[i]*n)+carry)/10;
        vfx[i]=p;
     }
     while(carry){
        vfx.push_back(carry%10);
        carry/=10;
     }
}

void subt(vector<int> &vfx,long long n){
    for(int i=0;n>0;i++){
        if(vfx[i]>=n%10)
            vfx[i]-=n%10;
        else{
            vfx[i+1]-=1;
            vfx[i]=(10+vfx[i])-n%10;
        }
        n/=10;
    }

}

long long lp[N+1];
vector<long long> pr;
void sieve(){
for (long long i=2; i<=N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
    }
    for (long long j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        lp[i * pr[j]] = pr[j];
}
}
vector<long long> factorization;
vector<long long> count_no;
void trial_division4(long long n) {
    factorization.clear();
    count_no.clear();
    int k=0;
    for (long long d : pr) {
        if (d * d > n)
            break;
        if(n%d==0){
        factorization.push_back(d);
        count_no.push_back(0);
        while (n % d == 0) {
            count_no[k]++;
            n /= d;
        }
        k++;
        }
    }
    if (n > 1){
        factorization.push_back(n);
        count_no.push_back(1);
    }
}
int main(){
    sieve();
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        trial_division4(n);
        /*for(int i=0;i<count_no.size();i++){
            cout<<factorization[i]<<"^"<<count_no[i]<<" ";
        }*/

        vector<int> vfx(1,1);
        for(int i=0;i<count_no.size();i++){
            long long prod=((pow(factorization[i],count_no[i]+1)-1)/(factorization[i]-1));
            mult(vfx,prod);
        }
        subt(vfx,n);
        int i=vfx.size()-1;
        while(vfx[i]==0)
                i--;
        for(;i>=0;i--){
            cout<<vfx[i];
        }
        cout<<endl;
    }
    return 0;
}
