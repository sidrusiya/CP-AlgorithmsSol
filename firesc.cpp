#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
vector<int> par, sz;
int findset(int i){
    if(par[i] == i)
        return i;
    return par[i] = findset(par[i]);
}
void mergeset(int a, int b){
    a = findset(a);
    b = findset(b);
    if(a == b) return;
    if(sz[a] < sz[b]){
        swap(a,b);
    }
    par[b] = a;
    sz[a] += sz[b];
}

signed main(){
   int t;
   cin>>t;
   while(t--){
      int n,m;
      cin>>n>>m;
        par = vector<int>(n+1);
        sz = vector<int>(n+1,1);
        for(int i=0;i<=n;i++){
            par[i] = i;
        }
      while(m--){
        int a,b;
            cin>>a>>b;
            mergeset(a,b);
        }
        ll ans2 = 1;
        ll ans1 = 0;
        for(int i=1;i<=n;i++){
            if(par[i] == i){
                ans1++;
                ans2 = (ans2*sz[i])%mod;
            }
        }
        cout<<ans1<<' '<<ans2<<'\n';

   }
}
