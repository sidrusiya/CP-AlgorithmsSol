#include<bits/stdc++.h>
using namespace std;

signed main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    long long sum=0,msum=LONG_MIN;
    int maxp=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        msum=max({sum,sum-maxp,msum});
        if((sum)>=0)
        {
            maxp=min(maxp,a[i]);
        }
        else
        {
            sum=0;
            maxp=INT_MAX;
        }
    }
    cout<<msum<<endl;
  }
}
