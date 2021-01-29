#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int mindiff(vector<int> &A,vector<int> &B,vector<int> &C){
    int p1=0,p2=0,p3=0,diff=INT_MAX;
    while(p1<A.size() && p2<B.size() && p3<C.size()){
        if(A[p1]<=B[p2]&& A[p1]<=C[p3]){
            p1++;
        }
        else if(B[p2]<=A[p1] && B[p2]<=C[p3]){
            p2++;
        }
        else{
            p3++;
        }
        if(diff>abs(max(max(A[p1],B[p2]),C[p3])-min(min(A[p1],B[p2]),C[p3])))
            diff=abs(max(max(A[p1],B[p2]),C[p3])-min(min(A[p1],B[p2]),C[p3]));
    }
    return diff;
}
vector<int> inters(vector<int> &A,vector<int> &B){
      int p1=0,p2=0;
      vector<int> C;
      while(p1<A.size() && p2<B.size()){
         if(A[p1]==B[p2])
            C.push_back(A[p1]);
         if(A[p1]<B[p2])p1++;
         else p2++;
      }
      return C;
}
void merge(vector<int> &A,vector<int> &B){
     int p1=0,p2=0;
     while(p2<B.size()){
        if(B[p2]<=A[p1] ){
            A.insert(A.begin()+p1,B[p2]);p2++;}
        else{
            p1++;
        }
     }
}
int main(){
   vector<int> A={1,4,5,8,10};
   vector<int> B={4,5,6};
   vector<int> C={2,3,6,6};
   //cout<<mindiff(A,B,C);
   vector<int> D=inters(A,B);
   merge(A,B);
   for(int i=0;i<A.size();i++){
       cout<<A[i]<<endl;
   }
}
