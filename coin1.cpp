#include<iostream>
using namespace std;
#include<math.h>
int main(){
   int t;
   cin>>t;
   int n;
   while(t--){
      cin>>n;
      long long sum=0;
      for(int i=1;i<=(n/2-n/4);i++){
         sum+=(long long)pow(2,i);
      }
      for(int i=n;i>(n-n/4);i--){
          sum+=(long long)pow(2,i);
      }
      cout<<abs((long long)(pow(2,n+1)-2)-2*sum)<<endl;
   }
   return 0;
}
