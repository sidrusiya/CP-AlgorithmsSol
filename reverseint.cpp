#include<iostream>
using namespace std;
int rev(int n){
   int p=0;
   long long num=0;
   if(n<0){
     p=1;
     n=-n;
   }
   while(n>0){
    num=10*num+n%10;
    n/=10;
   }
   if(p==1)
   {
       num=-num;
   }
   if(num>=INT_MIN && num<=INT_MAX){
    return num;
   }
   else
    return 0;
}
int main(){
int n;
cin>>n;
cout<<rev(n);
}
