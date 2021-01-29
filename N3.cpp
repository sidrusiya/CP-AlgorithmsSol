#include<iostream>
using namespace std;
#include<vector>
int N3(vector<int> &A){
   for(int i=0;i<23;i++){
       int index=rand()%A.size();
       int ele=A[index];
       int cnt=0;
       for(int i=0;i<A.size();i++){
        if(A[i]==ele)
            cnt++;
       }
       if(cnt>A.size()/3)
        return ele;
   }
   return -1;
}
int main(){
vector<int> A={1000545,1000038,1000647,1000038};
cout<<N3(A);
}
