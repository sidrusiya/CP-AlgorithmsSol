#include<iostream>
using namespace std;
#include<vector>
int diffm(vector<int> &A){
   int p1=0,p2=A.size()-1,sum=0,msum=0;
   while(p1<p2){
      sum=abs(p1-p2)+abs(A[p1]-A[p2]);
      if(msum<sum)msum=sum;
      if(abs(A[p1]-A[p2+1])<abs(A[p1+1]-A[p2]))p1++;
      else p2--;
   }
   return msum;
}
int main(){
vector<int> A={-70, -64, -6, -56, 64, 61, -57, 16, 48, -98};//{55,-8,43,52,8,59,-91,-79,-18,-94};
cout<<diffm(A);
}
