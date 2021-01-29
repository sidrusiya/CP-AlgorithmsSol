#include<iostream>
using namespace std;
void modex(long long n,long long &p,long long &q){
    if(n==1)
      return;
	if(n==2){
	  p++;
	  return;
	}
    if(n==3){
      q++;
      return;
    }
	if(n%2==0){
	   modex(n/2,p,q);
       p*=2;
       q*=2;
	}
	else{
	   modex(n/2+1,p,q);
	   modex(n/2,p,q);
	}
}
int main(){
    int t;
    cin>>t;
    long long n;
    while(t--){
      cin>>n;
      long long p=0,q=0;
      modex(n,p,q);
      cout<<p<<" "<<q<<endl;
    }
}
