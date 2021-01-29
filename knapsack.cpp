#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,W;
        cin>>n>>W;
        int w[n];
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        sort(w,w+n);
        int C=0;
        vector<int> res;
        for(int i=n-1;i>=0;i--){
           if(C+w[i]<=W)
               {
                   C+=w[i];
                   res.push_back(i);
               }
           if(C>=(W+1)/2)
                break;
        }


    }
}
