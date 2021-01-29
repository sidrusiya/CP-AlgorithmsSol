#include<iostream>
using namespace std;
long long modex(long long x,long long y){
    x=x%1000000007;
    if(y==0){
        return 1;
    }
    long long res=modex(x,y/2);
    res=res%1000000007;
    if(y%2==0){
       return ((res*res)%1000000007);
    }
    else{
       return ((((res*res)%1000000007)*(x%1000000007))%1000000007);
    }
}
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<5)
            cout<<n<<endl;
        else{
        long long n1=n/3;
        long long res=modex(3,n1-1);
        if(n%3==2){
           res=(6*res)%1000000007;
        }
        else if(n%3==1){
            res=(4*res)%1000000007;
        }
        else{
            res=(3*res)%1000000007;
        }
        cout<<res<<endl;
        }
    }
}
