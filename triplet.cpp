#include<iostream>
using namespace std;
#include<vector>
#include<string>
bool triplet(vector<string> &A){
   int p1=0,p2=1,p3=2;
   int n=A.size();
   while(p1!=n-2){
     float x=stof(A[p1])+stof(A[p2])+stof(A[p3]);
     if(x>=1&&x<=2){
        return true;
     }
     if(p3!=n-1)
        p3++;
     else if(p2!=n-2){
        p2++;
        p3=p2+1;
     }
     else if(p1!=n-3){
        p1++;
        p2=p1+1;
        p3=p2+1;
     }
     else
        break;
   }
   return false;
}
int main(){
  vector<string> A={"0.1","0.2","0.3","0.4"};
  cout<<triplet(A);
}
