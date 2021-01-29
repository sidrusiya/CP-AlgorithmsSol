#include<iostream>
using namespace std;
#include<vector>
int csum(vector<int> &A){
int sum=0,msum=0;
for(int i=0;i<A.size();i++){
    if(A[i]>0){
        sum+=A[i];
    }
    else{
        if(msum<sum)msum=sum;
        sum=0;
    }
}
if(msum<sum)msum=sum;
return msum;
}
int main(){
vector<int> A={1,2,3,4,-10};
cout<<csum(A);
}
