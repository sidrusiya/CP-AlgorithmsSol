#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            if(i<k){
               if(sum-(i+1)>0)
                   {
                      a[i]=-(i+1);
                      sum-=(i+1);
                   }
               else
                  {
                    a[i]=i+1;
                    sum+=i+1;
                  }
            }
            else
            {
                a[i]=-(i+1);
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
