#include<iostream>
using namespace std;
#include<vector>
#include<math.h>
long mp(vector <int> &A){
   long maxp=0;
   for(int i=0;i<A.size();i++){
      int ls=0,rs=0;
      for(int j=0;j<i;j++){
        if(A[j]>A[i]) ls=j;
      }
      for(int j=A.size()-1;j>i;j--){
        if(A[j]>A[i]) rs=j;
      }
      long prod=ls*rs;
      if(maxp<prod) maxp=prod;
   }
   return maxp;
}
int main()
{
   vector <int> A={1,4,3,4,5};
   cout<<mp(A);
}
