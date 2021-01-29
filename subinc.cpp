#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long y=1;
        long long sum=0;
        for(int i=1;i<n;i++){
            if(a[i]>=a[i-1]){
                y++;
            }
            else
            {
                sum+=(y*(y+1))/2;
                y=1;
            }
        }
        sum+=(y*(y+1))/2;
        cout<<sum<<endl;
    }
}
