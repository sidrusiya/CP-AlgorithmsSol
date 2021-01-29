#include<iostream>
using namespace std;
long long exeu(long long A,long long B,long long &x,long long &y){
    if(A==0 || A==B){
        x=0;
        y=1;
        return B;
    }
    long long x1,y1;
    long long D=exeu(B%A,A,x1,y1);
    x=y1-(B/A)*x1;
    y=x1;
    return D;
}
int main(){
    long long A,B;
    while(cin>>A>>B){
        long long x,y;
        int p=0;
        if(A>B){swap(A,B);p=1;}
        long long res=exeu(A,B,x,y);
        if(p==1)swap(x,y);
        cout<<x<<" "<<y<<" "<<res<<endl;
    }
}
