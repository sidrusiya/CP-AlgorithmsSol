#include<iostream>
using namespace std;
#include<vector>
int sum(vector<int> &A,int t){
    int i=0,j=A.size()-1;
    while(i<j){
        if(A[j]-A[i]==t)return 1;
        else if(A[j]-A[i]>t)j--;
        else i++;
    }
    return 0;
}
int dupl(vector<int> &A,int val){
    int i=0,j=1,k=0;
    while(j<A.size()){
        if(A[i]==val && A[j]!=val)
        {
           A[k++]=A[j];
        }
        else i++;
        j++;
    }
    A.erase(A.begin()+i+1,A.end());
    return A.size();
}
int suppl(vector<int> &A){
int area=0,i=0,j=A.size()-1;
while(i<j){
   int p=min(A[j],A[i])*(j-i);
   if(p>area)area=p;
   if(A[j]<A[i])j--;
   else i++;
}
return area;
}

int main(){
vector<int> A={1,5,4,3};
cout<<suppl(A);
}
