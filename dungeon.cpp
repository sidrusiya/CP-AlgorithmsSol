#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum= a+b+c;
        int q = sum/(9);
        if(a>=q && b>=q && c>=q && !(sum%(9)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
