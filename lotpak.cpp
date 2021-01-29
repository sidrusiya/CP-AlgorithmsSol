#include<iostream>
using namespace std;
long long modex(long long a,long long b){
     if(b==0)
        return 1;
     long long res=modex(a,b/2);
     if(b%2==0)
        return res*res;
     else
        return res*res*a;
}
int main(){
    int n;
    while(cin>>n){
        long long res=modex(4,n-3);
        long long res1=(24+(n-3)*9)*res;
        cout<<res1<<endl;
    }
    return 0;
}
