#include<bits/stdc++.h>
using namespace std;

bool shri(int N,int arr[]){
   int brr[1001]={0};
   for(int i=0;i<N;i++){
       if(brr[arr[i]]!=0 && arr[i-1]!=arr[i]){
            return false;
       }
       brr[arr[i]]++;
   }
   bool crr[1001]={false};
   for(int i=0;i<=1000;i++){
      if(brr[i]!=0){
      if(crr[brr[i]])
        return false;
      crr[brr[i]]=true;
      }
   }
   return true;
}

int main(){
   int t;
   cin>>t;
   while(t--){
      int N;
      cin>>N;
      int arr[N];
      for(int i=0;i<N;i++){
        cin>>arr[i];
      }
      if(shri(N,arr)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }
   return 0;
}
