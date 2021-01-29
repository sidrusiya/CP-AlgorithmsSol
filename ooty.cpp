#include<iostream>
using namespace std;
int gcd(int a, int b, long long & x, long long & y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }
    long long x1, y1;
    int d = gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}
int main(){
    int n,m,a,k;
    while(1){
        cin>>n>>m>>a>>k;
        if(n==0 && m==0 && a==0 && k==0)
           break;
        long long x, y, p=0;
        if(m>a){
            swap(m,a);
            p=1;
        }
        int d=gcd(m,a,x,y);
        if(p==1){
            swap(x,y);
            swap(m,a);
        }
        if((a-n)%d==0){
            long long x1=(x)*((k-n)/d),y1=(y)*((k-n)/d);
            long long k1=0,k2=0;
            int g=d;
            if(x1<0||y1>=0){
            if(x1 < 0) { // adjust a >= 0
                 k1 = -(x1/(a/g)) + (x1%(a/g) != 0);
            }
            if(y1>= 0) { // adjust b < 0
                k2 = (y1/(m/g)) + 1;
            }
            long long h=max(k1,k2);
            x1+=h*(a/g);y1-=h*(m/g);
            }
            if(x1 < 0 || y1>= 0)
                cout<<"Impossible"<<endl;
            else
                cout<<(long long)n+((long long)m)*x1<<endl;
        }
        else
            cout<<"Impossible"<<endl;
    }
    return 0;
}

