#include<iostream>
using namespace std;
#include<vector>
void one(vector<int> &A){
int c=1,k;
for(int i=A.size()-1;i>=0 && c;i--){
   k=(A[i]+c)%10;
   c=(A[i]+c)/10;
   A[i]=k;
}
while(!A[0])
    A.erase(A.begin());
}
int main(){
vector<int> A={0,0,0,6,0,6,4,8,8,1};
one(A);
for(int i=0;i<A.size();i++){
    cout<<A[i];
}
}
