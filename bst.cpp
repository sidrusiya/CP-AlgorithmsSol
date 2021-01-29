#include<iostream>
using namespace std;
#include<vector>
#include<string>
int G(int n);
int F(int i,int n){
   return G(i-1)*G(n-i);
}
int G(int n){
   if(n==0 || n==1)return 1;
   int ans=0;
   for(int i=1;i<=n;i++){
     ans+=F(i,n);
   }
   return ans;
}
int main(){
int n;
cin>>n;
cout<<G(n);
}
