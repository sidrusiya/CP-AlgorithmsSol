#include<iostream>
using namespace std;
int power(int x, int y) {
   int i,power=1;
   if(y == 0)
      return 1;
   for(i=1;i<=y;i++)
      power=power*x;
   return power;
}
int main(){
   int t;
   cin>>t;
   int n;
   while(t--){
      cin>>n;
      int sum=0;
      for(int i=1;i<=(n/2-n/4);i++){
         sum+=power(2,i);
      }
      for(int i=n;i>(n-n/4);i--){
          sum+=power(2,i);
      }
      cout<<abs((power(2,n+1)-2)-2*sum)<<endl;
   }
}
