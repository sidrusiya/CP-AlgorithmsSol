#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void nextp(vector<int> &A){
int i=A.size()-2;
while(i>=0 && A[i+1]<=A[i]){
    i--;
}
if(i>=0){
    int j=A.size()-1;
    while(j>=0 && A[j]<=A[i])j--;
    int temp=A[i];
    A[i]=A[j];
    A[j]=temp;
    int s=i+1,e=A.size()-1;
    while(s<e){
    temp=A[s];
    A[s]=A[e];
    A[e]=temp;
    s++;e--;
    }
}
if(i==-1)sort(A.begin(),A.end());
}
void fp(int A,string s){
   vector<int> B;
   for(int i=0;i<n;i++)
       B.push_back(i+1);
   for(int i=0;i<B.size()-1;i++){
      if(s[i]=='D'){
        int temp=B[i];
        B[i]=B[i+1];
        B[i+1]=temp;
      }
   }
   return B;
}
int main(){
vector<int> A={1,2,3,4};
nextp(A);
for(int i=0;i<A.size();i++)
    cout<<A[i]<<" ";
cout<<endl;
string s="IDI";
fp(4,s);
}
