#include<iostream>
using namespace std;
#include<vector>
void repeat(vector <int> &A){
   for(int i=0;i<A.size();i++){
    swap(A[i],A[A[i]-1]);
   }
   for(int i=0;i<A.size();i++){
     if(A[i]!=i+1)
        cout<<A[i]<<" "<<i+1;
   }
}
int main(){
vector<int> A={3,1,2,5,3};
repeat(A);
}
