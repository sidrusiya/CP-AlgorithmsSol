#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void find(vector<int> &A,int id){
   if(id>=A.size())return;
   int cur=A[A[id]];
   find(A,id+1);
   A[id]=cur;
}
void rp(vector<int> &A){
  find(A,0);
  for(int i=0;i<A.size();i++)
    cout<<A[i]<<" ";
}
int main()
{
    vector<int> A={0,3,2,4,1};
    rp(A);
}
