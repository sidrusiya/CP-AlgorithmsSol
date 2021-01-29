#include<iostream>
using namespace std;
#include<vector>
void set(vector<vector <int>> &A){
 // int a[A[0].size()]={0};
 int p;
  for(int i=0;i<A.size();i++){
    p=0;
    for(int j=0;j<A[0].size();j++){
        if(A[i][j]==0){
            p=1;
            if(i>0)
            A[(i-1)][j]=-1;
            else
            if(A[A.size()-1][j]==1)
               A[A.size()-1][j]=-1;
        }
    }
     if(p==1){
        for(int j=0;j<A[0].size();j++)
            A[i][j]=0;
     }
  }
  for(int j=0;j<A[0].size();j++){
    p=0;
    for(int i=0;i<A.size();i++){
        if(A[i][j]==-1){
            p=1;
            break;
        }
    }
    if(p==1){
    for(int i=0;i<A.size();i++)
        A[i][j]=0;
    }
  }
}
int main(){
   vector<vector<int>> A={{1,0,1},{1,1,1},{1,0,1}};
   set(A);
   for(int i=0;i<A.size();i++){
      for(int j=0;j<A[0].size();j++){
            cout<<A[i][j]<<" ";
    }
    cout<<endl;
   }
}
