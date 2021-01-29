#include<bits/stdc++.h>
#define ld long double
using namespace std;
long long modex(long long x,long long y){
    x=x%1000;
    if(y==0){
        return 1;
    }
    long long res=modex(x,y/2);
    res=res%1000;
    if(y%2==0){
       return ((res*res)%1000);
    }
    else{
       return ((((res*res)%1000)*(x%1000))%1000);
    }
}
int main(){
    // for smaller values that doesn't have first 3 digits.. trailing zeros will be displayed
    int t;
    cin>>t;
    long long N,K;
    while(t--){
    cin >> N >> K;
    ld n=(ld)N;
    ld k=(ld)K;
    ld here = k*(log10(n));
    ld frac = here - (ld)((long long)(here));
    ld res = pow(10.0, frac);
    string str = to_string(res);
    int cnt = 3,ok = 0;
    for(int i=0;i<(int)str.size() && cnt; i++){
        if(str[i]=='.')continue;
        if(str[i]=='0'&& ok == 0)continue;
        cout << str[i];
        ok = 1;
        cnt--;
    }
    cout<<"...";
    long long t=modex(N,K);
    string s=to_string(t);
    for(int i=0;i<3-s.length();i++){
        cout<<"0";
    }
    cout<<t<<endl;
    }
    return 0;
}
