#include<iostream>
using namespace std;
long long modex(long long x,long long y){
    x=x%10000007;
    if(y==0){
        return 1;
    }
    long long res=modex(x,y/2);
    res=res%10000007;
    if(y%2==0){
       return ((res*res)%10000007);
    }
    else{
       return ((((res*res)%10000007)*(x%10000007))%10000007);
    }
}
int main(){
    long long x,y;
    while(1){
      cin>>x>>y;
      if(x==0 && y==0)break;
      long long res=(modex(x,x)+2*modex(x-1,x-1)+2*modex(x-1,y)+modex(x,y))%10000007;
      cout<<res<<endl;
    }
}

