#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

signed main(){
   int n,m;
   cin>>n>>m;
   long long a[n],b[m], gcf=0;
   for(int i=0;i<n;i++)
    cin>>a[i];
   for(int i=0;i<m;i++)
    cin>>b[i];
   for(int i=1; i<n; i++){
      gcf = gcd(abs(a[i]-a[i-1]),gcf);
   }
   for(int i=0;i<m;i++){
      cout<<gcd(a[0]+b[i],gcf)<<" ";
   }
   cout<<endl;
}
