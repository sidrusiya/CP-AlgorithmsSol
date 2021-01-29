#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sp[n][40];
    for(int i=0;i<n;i++)
        sp[i][0]=a[i];
    for(int j=1;j<=(log2(n));j++){
        for(int i=0;i<n;i++){
            sp[i][j]=min(sp[i][j-1],sp[i+(1<<(j-1))][j-1]);
        }
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        int x = log2(r-l+1);
        cout<<min(sp[l][x],sp[r-(1<<x)+1][x])<<endl;
    }
}
