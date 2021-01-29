#include<iostream>
using namespace std;
#include<vector>
void spmat(int n){
vector <vector<int>> A(n,vector<int>(n));
int p1,p2,k=1;
for(int l=0;l<n;l++){
   if(l%2==0){
       p1=l/2;p2=l/2;
       while(p1+p2<=2*(n-1-(l)/2)){
            A[p1][p2]=k++;
            if(p2<n-1-(l)/2)p2++;
            else p1++;
       }
   }
   else{
        p1=n-1-(l)/2; p2=n-1-(l+1)/2;
        while(p1+p2>=l){
            A[p1][p2]=k++;
            if(p2>=(l+1)/2)p2--;
            else p1--;
        }
   }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
       cout<<A[i][j]<<" ";
    cout<<endl;
}
}
int main(){
int n;
cin>>n;
spmat(n);
}
