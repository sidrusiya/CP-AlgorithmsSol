#include<iostream>
using namespace std;
#include<vector>
int paths(int A,int B){
   int i=0,j=0,p=1,q=0;
   while(i<A-1 || j<B-1){
     if(i+1<A && j+1<B){
        p*=2;i++;j++;q=1;
     }
     else if(i+1<A ){
        if(q==1)p+=1;
        i++;
     }
      else if(j+1<B ){
        if(q==1)p+=1;
        j++;
     }

   }
   return p;
   if(A==1||B==1)
return 1;
return uniquePaths(A-1,B)+uniquePaths(A,B-1);
}
int main(){
int a,b;
cin>>a>>b;
cout<<paths(a,b);
}
