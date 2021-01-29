#include<iostream>
using namespace std;
long long fact(int n);

long long nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
long long fact(int n)
{
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main(){
  long long1 n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    arr[i]=rand()%10000;
  int sum=0,csum[n+1];
  csum[0]=0;
  for(int i=0;i<n;i++){
    sum=(sum+arr[i])%n;
    csum[i+1]=sum;
  }
  int d[n]={0};
  for(int i=0;i<=n;i++){
    d[csum[i]]++;
  }
  long long ans=0;
  for(int i=0;i<n;i++){
    if(d[i]>1){
        ans+=nCr(d[i],2);
    }
  }
  cout<<ans;
}
