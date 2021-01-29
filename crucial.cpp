#include<bits/stdc++.h>
#define int long long
using namespace std;
/* codes taken from cp-algorithms.com */
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}
signed main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x,y,g;
    if(a==0 && b==0)
    {
       if(c==0)
          cout<<"Yes";
       else
         cout<<"No";
    }
    else{
       if(find_any_solution(a,b,c,x,y,g)){
            if(x>=0 && y>=0)
                cout<<"Yes";
            else if(x<0 && y<0)
                cout<<"No";
            else if(x<0 && y>=0){
            int t1=(-x/b)+(((-x)%b+b)%b!=0);
            int t2=(y/a);
            if(t2>=t1)
                cout<<"Yes";
            else
                cout<<"No";
            }
            else{
            int t1=x/b;
            int t2=(-y/a)+(((-y)%a+a)%a!=0);
            if(t2<=t1)
                cout<<"Yes";
            else
                cout<<"No";
            }
        }
       else
            cout<<"No";
    }
    return 0;
}
