#include<iostream>
using namespace std;
#include<vector>
bool hotel(vector<int> &A,vector<int> &D,int k){
 return true;
}
int max(int A){
    int p=0;
    for(int i=1;5*i<=A;i++){
        if(i%5==0)p+=1;
        p+=1;
    }
    return p;
}
int main(){
vector<int> A={1,3,6};
vector<int> D={2,5,9};
int k=1;
cout<<hotel(A,D,k)<<endl;
cout<<max(10);
}
