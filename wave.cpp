#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void wave(vector<int> &A){
  int p=0;
  sort(A.begin(),A.end());
  for(int i=0;i+1<A.size();i++){
    if( p==0 && A[i]<A[i+1]){
        swap(A[i],A[i+1]);
    }
    else if( p==1 && A[i]>A[i+1]){
        swap(A[i],A[i+1]);
    }
    p=!p;
  }
}
int main(){
vector<int> A={5,4,3,2,1};
wave(A);
for(int i=0;i<A.size();i++)
    cout<<A[i]<<" ";
}
