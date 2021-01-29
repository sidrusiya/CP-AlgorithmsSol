#include<iostream>
using namespace std;
#include<math.h>
#include<algorithm>
int colno(string s){
int num=0,i=0;
while(s[i]!='\0'){
    num=26*num+(int)(s[i]-64);
    i++;
}
return num;
}
string coltit(int A){
   string s;
   while(A>0){
    if(A%26==0){
     s+='Z';
     A=A/26-1;}
    else{
     s+=(char)(A%26+64);
     A/=26;}
   }
   reverse(s.begin(),s.end());
   return s;
}
int main(){
string s;
cin>>s;
cout<<colno(s);
int n;
cin>>n;
cout<<coltit(n);
}
