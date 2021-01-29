#include<iostream>
using namespace std;
#include<vector>
#define ULL unsigned long long
const ULL MOD=(ULL)1e9+7;
vector<vector<ULL> > mult(vector<vector<ULL> >& A, vector<vector<ULL> >& B,ULL MOD){
    vector<vector<ULL> > t(2,vector<ULL>(2,0));
    for(ULL i=0;i<2;i++){
        for(ULL j=0;j<2;j++){
            t[i][j] = 0;
            for(ULL k=0;k<2;k++)t[i][j] += (A[i][k]*B[k][j])%MOD;
            t[i][j]%=MOD;
        }
    }
    return t;
}
ULL powder(ULL n){
    vector<vector<ULL> > M = {{1,1},{1,0}};
    vector<vector<ULL> > res = {{1,0},{0,1}};
    while(n>0){
        if(n&1){
            res = mult(res,M,MOD);
        }
        n/=2;
        M = mult(M,M,MOD);
    }
    return res[0][1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ULL l , r;
        cin>>l>>r;
        cout<<(powder(r+2) - powder(l+1) + MOD)%MOD<<endl;
    }
    return 0;
}
