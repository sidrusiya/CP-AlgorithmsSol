#include<iostream>
using namespace std;
#include<vector>
int dup(vector<int> &A){
  bool a[A.size()-1]={0};
  for(int i=0;i<A.size();i++){
     if(a[A[i]-1]==0){
        a[A[i]-1]=1;
     }
     else
        return A[i];
  }
  return -1;
}
int main(){
vector<int> A={3,1,4,1,4};
cout<<dup(A);
}
