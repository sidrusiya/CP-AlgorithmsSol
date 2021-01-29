#include<bits/stdc++.h>
#define fastio cin.tie(NULL);ios_base::sync_with_stdio(false);cout.tie(NULL);
#define ll long long
#define MOD 1000000007
using namespace std;
//using namespace __gnu_pbds;

void multiply(ll a[3][3] , ll b[3][3]) {
    ll res[3][3];
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            res[i][j] = 0;
            for(int k=0 ; k<3 ; k++)
                res[i][j] = (res[i][j]%MOD + (a[i][k]*b[k][j])%MOD)%MOD;
        }
    }
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            a[i][j] = res[i][j];
        }
    }
}

ll power(ll F[3][3], ll n) {
    ll M[3][3] = {{0 , 1 , 1} , {1 , 0 , 0} , {0 , 1 , 0}};
    //if(n == 0)
      //  return 0;
    if(n == 1)
        return F[0][0] + F[0][1];

    power(F, n/2);

    multiply(F, F);

    if (n%2 != 0)
        multiply(F, M);
   return F[0][0] + F[0][1];
}

int main() {

    fastio

    ll t;
    cin>>t;

    while(t--) {

        ll n;
        cin>>n;

        // ll dp[n+1] = {0};
        // dp[0] = 0;
        // dp[1] = 0;
        // dp[2] = 1;
        // dp[3] = 1;

        // for(int i=4 ; i<=n ; i++) {
        //     dp[i] = (dp[i-2]%MOD + dp[i-3]%MOD)%MOD;
        // }

        // cout<<dp[n]<<endl;

        if(n == 1) {
            cout<<0<<endl;
            continue;
        } else if(n == 2) {
            cout<<1<<endl;
            continue;
        } else if(n == 3) {
            cout<<1<<endl;
        } else {
            ll M[3][3] = {{0 , 1 , 1} , {1 , 0 , 0} , {0 , 1 , 0}};
            cout<<power(M , n-3)%MOD<<endl;
        }

    }
    return 0;
}


