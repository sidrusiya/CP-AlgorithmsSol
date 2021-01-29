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
    int n,m,a,k;
    cin >> n >> m >> a >> k;
    int A = -a;
    int B = m;
    int C = k-n;
    int X0,Y0,G0;
    if(A==0 && B==0 && C==0)
          cout<<k<<endl;
    else if(A==0 && B==0 && C!=0)
          cout<<"Impossible"<<endl;
    else if(!A){
        if(C%B)
           cout<<"Impossible"<<endl;
        else
            cout<<k<<endl;
    }
    else if(!B){
        if(C%A)
           cout<<"Impossible"<<endl;
        else
            cout<<n<<endl;
    }
    else if(find_any_solution(A,B,C,X0,Y0,G0)){
            /*
            let's say you can form the equation (a)
            (-a)x0 + by0 = k-n --------(a)
            here, x0 and y0 are any valid solution

            now any solution of type x = X0 + mt, y = Y0 + at will work
                in the equation =>  k + ax0 = n + my0 ---------(from eq (a))

                                =>  k + ax = n + my
                                =>  k + ax0 + amt = n + my0 + mat ----------(II)
                                =>  k + ax0 = n + my0  [ proved ]
             our aim is to find lowest t(which is used in eq II ) to get lowest time which also satisfy x >= 1 and y >= 0
             x >= 1
             x0 + mt >= 1
             t >= (1 - x0)/m
             t >= ceil( (1-x0)/m)

             similarly for y
             y >= 0
             y0 + at >= 0
             t >= ceil(y0/a)

             also as we know our time needs to be positive
             k + ax0 + amt > 0
             t >  (-k -ax0)/am
             t >= (-k -ax0 +1)/am
             t >= ceil( (-k-ax0+1)/am)

             t0 = max( ceil((-k-ax0+1)/am),ceil((1-x0)/m),ceil(y0/a));
             print answer k + ax0 + amt0
             */
             //my additional code
             int t0=max(max(((1-X0)/m)+((1-X0)%m!=0),(Y0/a)+(Y0%a!=0)),
                             ((-k-(a*X0)+1)/(a*m))+((-k-(a*X0)+1)%(a*m)!=0));
             cout<<k+a*X0+a*m*t0<<endl;

    }
    else{
        cout << "Impossible\n";
    }
return 0;

}

