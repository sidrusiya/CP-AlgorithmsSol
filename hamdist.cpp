#include<iostream>
using namespace std;
#include<vector>
int ham(vector<int> &A){
    int pos[32]={0};
    for(int i=0;i<32;i++){
        for(int j=0;j<A.size();j++){
            pos[i]+=A[j]&1;
            A[j]=A[j]>>1;
        }
    }
    long long ans=0;
    for(int i=0;i<32;i++){
       ans+=((pos[i]*(A.size()-pos[i])));
    }
    return (2*ans)%1000000007;
}
int main(){
vector<int> A={2,4,6
};
cout<<ham(A);
int n=3;
}
