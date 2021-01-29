#include<iostream>
using namespace std;
#include<vector>
long long power(int a ,int b){
  long long p=1;
  for(int i=0;i<b;i++)
    p*=a;
  return p;
}
void NK(vector<int> &A,int N,int K){
    long long ans=0;
    string s=to_string(K);
    int i=0;
    while(s[i]!='\0'){
       int p=0,q=0;
       for(int j=0;j<A.size();j++){
          if(A[j]<(int)(s[i]-'0'))p++;
          if(A[j]==(int)(s[i]-'0'))q=1;
          if(i==0 && A[j]==0 && N!=1)p=p-1;
       }
       ans+=p*power(A.size(),N-1-i);
       if(q==0)break;
       i++;
    }
    cout<<ans;
}
int main(){
   vector<int> A={0,1,5};
   int N=1,K=2;
   NK(A,N,K);
}
