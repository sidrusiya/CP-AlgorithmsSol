#include<iostream>
using namespace std;
#include<vector>
int mis(vector<int> &A){
  int sum=0,lar=0;
  for(int i=0;i<A.size();i++){
    if(A[i]>0){
        sum+=A[i];
        if(A[i]>lar)lar=A[i];
    }
  }
  if(lar==0)
    return 1;
  else{
    if(sum==((lar*(lar+1))/2))
        return lar+1;
    else
        return ((lar*(lar+1))/2)-sum;
  }
}
int main(){
vector<int> A={1,2,0};
cout<<mis(A);
}
