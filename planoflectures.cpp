#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n,k;
    cin>>n>>k;
    int p[n],a[n];
    vector<int> b[n+1];
    for(int i=0;i<n;i++){
        cin>>p[i];
        b[p[i]].push_back(i);
    }
    int x[k],y[k];
    for(int i=0;i<k;i++){
        cin>>x[i]>>y[i];
        a[x[i]-1]=y[i];
    }
    int res,f=0;
    while(f<n){

    }
}
