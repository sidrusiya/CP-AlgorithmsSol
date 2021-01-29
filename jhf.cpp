#include<iostream>
using namespace std;
long long modex(long long x,long long y){
    x=x%998244353;
    if(y==0){
        return 1;
    }
    long long res=modex(x,y/2);
    res=res%998244353;
    if(y%2==0){
       return ((res*res)%998244353);
    }
    else{
       return ((((res*res)%998244353)*(x%998244353))%998244353);
    }
}
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        long a[n],p=INT_MAX,k=0,b[n]={0},mex=n+1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(p>a[i] && a[i]>0){
                p=a[i];
            }
            if(a[i]==1)
                k++;
            if(a[i]>0 && a[i]<=n)
               b[a[i]-1]=1;
        }
        if(p!=1){
            cout<<(modex(2,n))%998244353 <<endl;
        }
        else{

           long res2=(modex(2,n-k))% 998244353;
           cout<<((res1%998244353)+(res2%998244353))%998244353<<endl;
        }
    }
    return 0;
}
