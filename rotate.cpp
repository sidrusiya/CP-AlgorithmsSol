#include<iostream>
using namespace std;
#include<vector>
void rotate(vector<int> A){
    int n=A[0].size();
    for(int i=0;i<(n/2);i++){
        for(int j=0;j<A.size();j++){
            int temp=A[j][i];
            A[j][i]=A[j][n-1-i];
            A[j][n-1-i]=temp;
        }
    }
    for(int i=n-1;i>=0;i--){
        int j=i;
        while(j>=0){
           int temp= A[n-1-i][j];
           A[n-1-i][j]=A[n-1-j][i];
           A[n-1-j][i]=temp;
           j--;
        }
    }
}
int main(){
}
