#include<iostream>
using namespace std;
#include<vector>
int mm(vector<int> A,vector<int> B,vector<int> C){
    int p1=0,p2=0,p3=0,x=INT_MAX;
    while(p1<A.size() && p2<B.size() && p3<C.size()){
        int p=max(max(abs(A[p1]-B[p2]),abs(A[p1]-C[p3])),abs(B[p2]-C[p3]));
        if(p<x)x=p;
        int q=min(min(A[p1],B[p2]),C[p3]);
        if(q==A[p1])p1++;
        else if(q==B[p2])p2++;
        else p3++;
    }
    return x;
}
int main(){
vector<int> A={1,4,10 };
vector<int> B={2,10,20 };
vector<int> C={10,12 };
cout<<mm(A,B,C);
}
