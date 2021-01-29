#include<iostream>
using namespace std;
bool palint(int n){
   if(n<0)return false;
   long long num=0;
   while(n>0){
    num=10*num+n%10;
    n/=10;
   }
   if(num==n)
    return true;
   else
    return false;
}
int main(){
int n;
cin>>n;
cout<<palint(n);
}
