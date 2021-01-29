#include<iostream>
using namespace std;
#include<vector>
#include<math.h>
bool powa(int A){
for(float p=2;pow(A,1/p)>1.9 ;p++){
   float a=pow(A,1/p);
   int b=(int)a;
   float c=(float)b;
   cout<<a<<" "<<c<<endl;
   if(a==c)return true;
}
return false;
}
int main(){
int n;
cin>>n;
cout<<powa(n);
}
