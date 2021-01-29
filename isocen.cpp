#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int N,Q;
      cin>>N>>Q;
      string s;
      cin>>s;
      vector<int> jai(26,0);
      for(int i=0;i<s.length();i++){
        jai[s[i]-97]++;
      }
      while(Q--){
        int C;
        cin>>C;
        int sum=0;
        for(int i=0;i<26;i++){
            if(jai[i]>C)
                sum+=jai[i]-C;
        }
        cout<<sum<<endl;
      }
   }
   return 0;
}
