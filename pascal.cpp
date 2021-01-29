#include<iostream>
using namespace std;
#include<vector>
/*int gcd(long long a,long long b)
{
   if(a<b)swap(a,b);
   while(a%b!=0){
    int k=a;
    a=b;
    b=a%b;
   }
   return b;
}
int nCr(int n,int r){
   long long p = 1, k = 1;
   if (n - r < r)
        r = n - r;
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = gcd(p, k);
            p /= m;
            k /= m;

            n--;
            r--;
        }
    }
    else
          p = 1;
    return (int)p;
}
void pascal(int k){
    vector<vector<int>> A(k,vector<int>());
    for(int i=0;i<k;i++){
        for(int j=0;j<=i;j++){
            A[i].push_back(nCr(i,j));
            cout<<nCr(i,j)<<" ";
        }
      cout<<endl;
    }
}*/
void kpascal(int A){
   vector<int> P;
   int c=1,x=A+1;
   for(int y=1;y<=x;y++){
    P.push_back(c);
    c=(c*(x-y))/y;
   }
   return P;
}
int main(){
  kpascal(5);
}
