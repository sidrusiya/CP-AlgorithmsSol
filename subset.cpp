#include<iostream>
using namespace std;
#include<vector>
#include<set>
#include<algorithm>
void sbst1(int A,int B,vector<int> &C,vector<vector<int>> &res,int i){
  if(i==A+1)return;
  C.push_back(i);
  if(C.size()==B){
  res.push_back(C);
  C.pop_back();
  }
  sbst1(A,B,C,res,i+1);
  C.pop_back();
  sbst1(A,B,C,res,i+1);
}
vector<vector<int>> sbst(int A,int B){
vector<vector<int>> res;
vector<int> C;
if(B>0 && A>0)
sbst1(A,B,C,res,1);
return res;
}
int main(){
vector<int> A={1,2,2};
vector<vector<int>> B=sbst(4,3);
for(int i=0;i<B.size();i++){
    for(int j=0;j<B[i].size();j++){
        cout<<B[i][j]<<" ";
    }
    cout<<endl;
}
}
