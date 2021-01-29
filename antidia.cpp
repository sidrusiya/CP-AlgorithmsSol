#include<iostream>
using namespace std;
#include<vector>
void antidia(vector<vector<int>> &A){
  vector<vector<int>> P(2*A.size()-1,vector<int>());
  int p1=0,p2=0,k=0,n=A.size();
  while(p1!=n||p2!=n-1){
    int i=p1,j=p2;
    while(i<=p2 &&j>=p1){
           P[k].push_back(A[i][j]);
           i++;j--;
    }
    if(p1==0 && p2<n-1){p2++;}
    else{p1++;}
    cout<<endl;
  }
}
int main(){
vector<vector<int>> A={{1,2,3},{4,5,6},{7,8,9}};
antidia(A);
}
