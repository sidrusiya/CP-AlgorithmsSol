#include<bits/stdc++.h>
#include<vector>
using namespace std;

const int N =100000;

int lp[N+1];
vector<int> pr;
int np[N+1];

void sieve(){
    for (int i=2; i<=N; ++i) {
    np[i]=np[i-1];
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
        np[i]++;
    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        lp[i * pr[j]] = pr[j];
    }
}

int main(){
    sieve();
    int t;
    cin>>t;
    long long n,k;
    while(t--){
        cin>>n>>k;
        int p=sqrtl(n);
        int q=sqrtl(k);
        cout<<np[p]<<" "<<max(0,np[p]-np[q])<<endl;
    }
    return 0;
}
